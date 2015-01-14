using System;
using System.Reflection;

namespace ManagedSamp.Preloader
{
    internal class PreloaderContext
    {
        private readonly AppDomain appDomain;

        public PreloaderContext(AppDomain appDomain)
        {
            this.appDomain = appDomain;
        }

        public AssemblyHandle LoadAssembly(string path)
        {
            var assemblyName = AssemblyName.GetAssemblyName(path);
            var asm = this.appDomain.Load(assemblyName);

            return new AssemblyHandle(asm);
        }

        public AppDomain AppDomain
        {
            get { return this.appDomain; }
        }
    }
}