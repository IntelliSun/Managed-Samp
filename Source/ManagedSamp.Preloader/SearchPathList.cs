using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;

namespace ManagedSamp.Preloader
{
    internal class SearchPathList : IEnumerable<string>
    {
        private readonly string baseDirectory;
        private readonly List<string> list;

        public SearchPathList(string baseDirectory)
        {
            this.baseDirectory = baseDirectory;
            this.list = new List<string> {
                baseDirectory
            };
        }

        public void WithReletive(string reletivePath)
        {
            var path = Path.Combine(this.baseDirectory, reletivePath);
            if (Directory.Exists(path))
                this.list.Add(path);
        }

        /// <summary>
        /// Returns an enumerator that iterates through the collection.
        /// </summary>
        /// <returns>
        /// A <see cref="T:System.Collections.Generic.IEnumerator`1"/> that can be used to iterate through the collection.
        /// </returns>
        public IEnumerator<string> GetEnumerator()
        {
            return this.list.GetEnumerator();
        }

        /// <summary>
        /// Returns an enumerator that iterates through a collection.
        /// </summary>
        /// <returns>
        /// An <see cref="T:System.Collections.IEnumerator"/> object that can be used to iterate through the collection.
        /// </returns>
        IEnumerator IEnumerable.GetEnumerator()
        {
            return this.GetEnumerator();
        }
    }
}