// Lock @ 00547910 body=[[00547910, 0054791e]]


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Lock(void)
    public: virtual void __thiscall std::basic_filebuf<unsigned short,struct
   std::char_traits<unsigned short> >::_Lock(void)
    public: virtual void __thiscall std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Lock(void)
   
   Library: Visual Studio 2010 Release */

void Lock(void)

{
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x54) != (FILE *)0x0) {
    __lock_file(*(FILE **)(in_ECX + 0x54));
  }
  return;
}

