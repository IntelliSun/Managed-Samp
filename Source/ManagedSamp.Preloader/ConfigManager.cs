using System;
using System.IO;
using System.Linq;
using IntelliSun.IO;

namespace ManagedSamp.Preloader
{
    internal class ConfigManager
    {
        private readonly IniDocument document;

        public ConfigManager(IniDocument document)
        {
            if (document == null)
                throw new ArgumentNullException("document");

            this.document = document;
        }

        public string GetBootstrapperPath()
        {
            var category = this.document.Categories.First();
            return category == null ? null : category["Bootstrapper"].Value;
        }

        public static ConfigManager Find(params string[] searchDirectories)
        {
            foreach (var searchDirectory in searchDirectories)
            {
                var filePath = Path.Combine(searchDirectory, "preloader.ini");
                if (!File.Exists(filePath))
                    continue;

                return new ConfigManager(IniDocument.Load(filePath));
            }

            return null;
        }
    }
}