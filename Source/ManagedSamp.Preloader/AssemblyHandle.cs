using System;
using System.Linq;
using System.Reflection;
using System.Runtime.InteropServices;

namespace ManagedSamp.Preloader
{
    internal class AssemblyHandle
    {
        private static readonly Guid _entryPointAttributeGuid =
            Guid.Parse("6636857C-2271-4A3D-B9EF-FC583C7A1C93");

        private readonly Assembly assembly;

        public AssemblyHandle(Assembly assembly)
        {
            this.assembly = assembly;
        }

        public string Load()
        {
            var types = this.assembly.GetTypes();
            foreach (var type in types)
            {
                var methods = type.GetMethods(BindingFlags.Public | BindingFlags.Static);
                foreach (var methodInfo in methods)
                {
                    var attributes = methodInfo.GetCustomAttributes();
                    var query = attributes.Any(attribute => {
                        var attributeType = attribute.GetType();
                        return attributeType.Name == "PreloaderEntryPoint" ||
                               attributeType.GUID == _entryPointAttributeGuid;
                    });

                    if (!query || methodInfo.GetParameters().Length != 0)
                        continue;

                    methodInfo.Invoke(null, new object[0]);
                    return methodInfo.Name;
                }
            }

            return null;
        }

        public bool IsValid
        {
            get { return this.assembly != null; }
        }
    }
}