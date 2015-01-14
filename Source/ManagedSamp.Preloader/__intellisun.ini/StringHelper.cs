/*
 * The file contains code from IntelliSun library
 * The file was copied to reduce project dependencies
 */ 

using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;

namespace IntelliSun
{
    internal static class StringHelper
    {
        public static string SelectBetween(this string i, char first, char last)
        {
            return SelectBetween(i, first, last, 0);
        }

        public static string SelectBetween(this string i, char first, char last, int startIndex)
        {
            var idx1 = i.IndexOf(first, startIndex) + 1;
            var idx2 = i.IndexOf(last, idx1);

            if (idx1 == 0 || idx2 == -1)
                return null;

            return i.Substring(idx1, idx2 - idx1);
        }

        public static string TokenFormat(string format, Dictionary<char, string> tokens)
        {
            return TokenFormat(format, tokens, "-{0}");
        }

        public static string TokenFormat(string format, Dictionary<char, string> tokens, string template)
        {
            return TokenFormat(format, tokens.ToDictionary(
                x => x.Key.ToString(CultureInfo.InvariantCulture), x => x.Value), template);
        }

        public static string TokenFormat(string format, Dictionary<string, string> tokens)
        {
            return TokenFormat(format, tokens, "-{0}");
        }

        public static string TokenFormat(string format, Dictionary<string, string> tokens, string template)
        {
            if (String.IsNullOrEmpty(format))
                return String.Empty;

            return tokens.Count == 0
                ? format
                : tokens.Aggregate(format, (current, t) => current.Replace(String.Format(template, t.Key), t.Value));
        }

        public static bool Contains(this string i, char[] chars)
        {
            return chars.All(i.Contains);
        }
    }
}