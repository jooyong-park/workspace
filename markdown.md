Markdown Table of Contents GitLab Flavored Markdown

Newlines Multiple underscores in words URL autolinking Code and Syntax Highlighting Emoji Special GitLab references Standard Markdown

Headers Emphasis Lists Links Images Blockquotes Inline HTML Horizontal Rule Line Breaks Tables References

GitLab Flavored Markdown (GFM) For GitLab we developed something we call "GitLab Flavored Markdown" (GFM). It extends the standard Markdown in a few significant ways to add some useful functionality.

You can use GFM in

commit messages comments issues merge requests milestones wiki pages You can also use other rich text files in GitLab. You might have to install a depency to do so. Please see the github-markup gem readme for more information.

Newlines GFM honors the markdown specification in how paragraphs and line breaks are handled.

A paragraph is simply one or more consecutive lines of text, separated by one or more blank lines.:

Roses are red Violets are blue

Sugar is sweet Roses are red Violets are blue

Sugar is sweet

Multiple underscores in words It is not reasonable to italicize just part of a word, especially when you're dealing with code and names that often appear with multiple underscores. Therefore, GFM ignores multiple underscores in words.

perform_complicated_task do_this_and_do_that_and_another_thing perform_complicated_task do_this_and_do_that_and_another_thing

URL autolinking GFM will autolink standard URLs you copy and paste into your text. So if you want to link to a URL (instead of a textural link), you can simply put the URL in verbatim and it will be turned into a link to that URL.

http://www.google.com http://www.google.com

Code and Syntax Highlighting Blocks of code are either fenced by lines with three back-ticks \`\``, or are indented with four spaces. Only the fenced code blocks support syntax highlighting.

Inline `code` has `back-ticks around` it. Inline code has back-ticks around it.

Example:

```javascript
var s = "JavaScript syntax highlighting";
alert(s);
```

```python
def function():
    #indenting works just fine in the fenced code block
    s = "Python syntax highlighting"
    print s
```

```ruby
require 'redcarpet'
markdown = Redcarpet.new("Hello World!")
puts markdown.to_html
```

```
No language indicated, so no syntax highlighting.
s = "There is no highlighting for this."
But let's throw in a <b>tag</b>.
```

becomes:

var s = "JavaScript syntax highlighting"; alert(s); def function(): #indenting works just fine in the fenced code block s = "Python syntax highlighting" print s require 'redcarpet' markdown = Redcarpet.new("Hello World!") puts markdown.to_html No language indicated, so no syntax highlighting. s = "There is no highlighting for this." But let's throw in a <b>tag</b>. Emoji Sometimes you want to be a :ninja: and add some :glowing_star: to your :speech_balloon:. Well we have a gift for you:

:high_voltage_sign: You can use emoji anywhere GFM is supported. :victory_hand:

You can use it to point out a :bug: or warn about :speak_no_evil_monkey: patches. And if someone improves your really :snail: code, send them some :cake:. People will :heart: you for that.

If you are new to this, don't be :fearful_face:. You can easily join the emoji :family:. All you need to do is to look up on the supported codes.

Consult the [Emoji Cheat Sheet](https://www.dropbox.com/s/b9xaqb977s6d8w1/cheat_sheet.pdf) for a list of all supported emoji codes. :thumbsup: Sometimes you want to be a :ninja: and add some :glowing_star: to your :speech_balloon:. Well we have a gift for you:

:high_voltage_sign: You can use emoji anywhere GFM is supported. :victory_hand:

You can use it to point out a :bug: or warn about :speak_no_evil_monkey: patches. And if someone improves your really :snail: code, send them some :cake:. People will :heart: you for that.

If you are new to this, don't be :fearful_face:. You can easily join the emoji :family:. All you need to do is to look up on the supported codes.

Consult the Emoji Cheat Sheet for a list of all supported emoji codes. :thumbsup:

Special GitLab References GFM recognized special references.

You can easily reference e.g. an issue, a commit, a team member or even the whole team within a project.

GFM will turn that reference into a link so you can navigate between them easily.

GFM will recognize the following:

@foo : for team members @all : for the whole team #123 : for issues !123 : for merge requests $123 : for snippets 1234567 : for commits[file](path/to/file) : for file references Standard Markdown Headers

H1
==

H2
--

### H3

#### H4

##### H5

###### H6

Alternatively, for H1 and H2, an underline-ish style:

Alt-H1
======

Alt-H2
------

H1 H2 H3 H4

H5

H6

Alternatively, for H1 and H2, an underline-ish style:

Alt-H1 Alt-H2 Header IDs and links All markdown rendered headers automatically get IDs, except for comments.

On hover a link to those IDs becomes visible to make it easier to copy the link to the header to give it to someone else.

The IDs are generated from the content of the header according to the following rules:

remove the heading hashes # and process the rest of the line as it would be processed if it were not a header from the result, remove all HTML tags, but keep their inner content convert all characters to lowercase convert all characters except [a-z0-9_-] into hyphens - transform multiple adjacent hyphens into a single hyphen remove trailing and heading hyphens For example:

###### ..Ab_c-d. e [anchor](url) ![alt text](url)..

which renders as:

..AB_C-D. E ANCHOR alt text..

will first be converted by step 1) into a string like:

..Ab_c-d. e &lt;a href="url">anchor&lt;/a> &lt;img src="url" alt="alt text"/>.. After removing the tags in step 2) we get:

..Ab_c-d. e anchor .. And applying all the other steps gives the id:

ab_c-d-e-anchor Note in particular how:

for markdown anchors [text](url), only the text is used markdown images ![alt](url) are completely ignored Emphasis Emphasis, aka italics, with *asterisks* or *underscores*.

Strong emphasis, aka bold, with **asterisks** or **underscores**.

Combined emphasis with **asterisks and *underscores***.

Strikethrough uses two tildes. ~~Scratch this.~~ Emphasis, aka italics, with asterisks or underscores.

Strong emphasis, aka bold, with asterisks or underscores.

Combined emphasis with asterisks and underscores.

Strikethrough uses two tildes. Scratch this.

Lists 1. First ordered list item 2. Another item * Unordered sub-list. 1. Actual numbers don't matter, just that it's a number 1. Ordered sub-list 4. And another item.

Some text that should be aligned with the above item.

-	Unordered list can use asterisks
-	Or minuses
-	Or pluses First ordered list item Another item Unordered sub-list. Actual numbers don't matter, just that it's a number Ordered sub-list And another item. Some text that should be aligned with the above item.

Unordered list can use asterisks Or minuses Or pluses Links There are two ways to create links, inline-style and reference-style.

[I'm an inline-style link](https://www.google.com)

[I'm a reference-style link](https://www.mozilla.org)

[I'm a relative reference to a repository file](LICENSE)

[You can use numbers for reference-style link definitions](http://slashdot.org)

Or leave it empty and use the [link text itself](http://www.reddit.com)

Some text to show that the reference links can follow later.

I'm an inline-style link

I'm a reference-style link

I'm a relative reference to a repository file

You can use numbers for reference-style link definitions

Or leave it empty and use the link text itself

Some text to show that the reference links can follow later.

Note

Relative links do not allow referencing project files in a wiki page or wiki page in a project file. The reason for this is that, in GitLab, wiki is always a separate git repository. For example:

[I'm a reference-style link][style]

will point the link to wikis/style when the link is inside of a wiki markdown file.

Images Here's our logo (hover to see the title text):

Inline-style: ![alt text](assets/logo-white.png)

Reference-style: ![alt text1](assets/logo-white.png)

Here's our logo:

Inline-style:

alt text

Reference-style:

alt text

Blockquotes > Blockquotes are very handy in email to emulate reply text. > This line is part of the same quote.

Quote break.

> This is a very long line that will still be quoted properly when it wraps. Oh boy let's keep writing to make sure this is long enough to actually wrap for everyone. Oh, you can *put* **Markdown** into a blockquote. Blockquotes are very handy in email to emulate reply text. This line is part of the same quote. Quote break.

This is a very long line that will still be quoted properly when it wraps. Oh boy let's keep writing to make sure this is long enough to actually wrap for everyone. Oh, you can put Markdown into a blockquote. Inline HTML You can also use raw HTML in your Markdown, and it'll mostly work pretty well.

<dl> <dt>Definition list</dt> <dd>Is something people use sometimes.</dd>

<dt>Markdown in HTML</dt> <dd>Does *not* work **very** well. Use HTML <em>tags</em>.</dd></dl> Definition list Is something people use sometimes.

Markdown in HTML Does not work very well. Use HTML tags.

Horizontal Rule Three or more...

---

Hyphens

---

Asterisks

---

Underscores Three or more...

Hyphens

Asterisks

Underscores

Line Breaks My basic recommendation for learning how line breaks work is to experiment and discover -- hit <Enter> once (i.e., insert one newline), then hit it twice (i.e., insert two newlines), see what happens. You'll soon learn to get what you want. "Markdown Toggle" is your friend.

Here are some things to try out:

Here's a line for us to start with.

This line is separated from the one above by two newlines, so it will be a *separate paragraph*.

This line is also a separate paragraph, but... This line is only separated by a single newline, so it's a separate line in the *same paragraph*. Here's a line for us to start with.

This line is separated from the one above by two newlines, so it will be a separate paragraph.

This line is also begins a separate paragraph, but... This line is only separated by a single newline, so it's a separate line in the same paragraph.

Tables Tables aren't part of the core Markdown spec, but they are part of GFM and Markdown Here supports them.

| header 1 | header 2 |
|----------|----------|
| cell 1   | cell 2   |
| cell 3   | cell 4   |

Code above produces next output:

header 1 header 2 cell 1 cell 2 cell 3 cell 4 References This document leveraged heavily from the Markdown-Cheatsheet. The Markdown Syntax Guide at Daring Fireball is an excellent resource for a detailed explanation of standard markdown. Dillinger.io is a handy tool for testing standard markdown.
