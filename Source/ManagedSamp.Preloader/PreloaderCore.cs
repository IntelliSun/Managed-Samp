using System;
using System.Linq;

namespace ManagedSamp.Preloader
{
    public static class PreloaderCore
    {
        public static bool Load()
        {
            var workingDir = Environment.CurrentDirectory;
            var config = GetConfig(workingDir);
            if (config == null)
                return false;

            var bootstrapperPath = config.GetBootstrapperPath();
            if (bootstrapperPath == null)
                return false;

            var context = new PreloaderContext(AppDomain.CurrentDomain);
            var bootstrapper = context.LoadAssembly(bootstrapperPath);
            if (bootstrapper == null || !bootstrapper.IsValid)
                return false;

            var callMethod = bootstrapper.Load();
            return callMethod != null;
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
