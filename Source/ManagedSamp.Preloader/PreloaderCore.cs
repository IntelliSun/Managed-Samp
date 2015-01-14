using System;
using System.Diagnostics;
using System.Linq;

namespace ManagedSamp.Preloader
{
    public static class PreloaderCore
    {
        public static int Load(string arg)
        {
            var appDomain = AppDomain.CurrentDomain;
            var workingDir = appDomain.BaseDirectory;

            var config = GetConfig(workingDir);
            if (config == null)
                return 0;

            var bootstrapperPath = config.GetBootstrapperPath();
            if (bootstrapperPath == null)
                return 0;

            var context = new PreloaderContext(appDomain);
            var bootstrapper = context.LoadAssembly(bootstrapperPath);
            if (bootstrapper == null || !bootstrapper.IsValid)
                return 0;

            var callMethod = bootstrapper.Load();
            return callMethod != null ? Int32.MinValue : 0;
        }

        private static ConfigManager GetConfig(string baseDirectory)
        {
            var searchDirectories = new SearchPathList(baseDirectory);
            searchDirectories.WithReletive("preloader");
            searchDirectories.WithReletive("managedsamp");
            searchDirectories.WithReletive("..\\");
            searchDirectories.WithReletive("..\\preloader");
            searchDirectories.WithReletive("..\\managedsamp");

            return ConfigManager.Find(searchDirectories.ToArray());
        }
    }
}
