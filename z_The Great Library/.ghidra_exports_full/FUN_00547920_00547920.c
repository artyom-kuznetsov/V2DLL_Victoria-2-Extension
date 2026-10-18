// Unlock @ 00547920 body=[[00547920, 0054792e]]


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Unlock(void)
    public: virtual void __thiscall std::basic_filebuf<unsigned short,struct
   std::char_traits<unsigned short> >::_Unlock(void)
    public: virtual void __thiscall std::basic_filebuf<wchar_t,struct std::char_traits<wchar_t>
   >::_Unlock(void)
   
   Library: Visual Studio 2010 Release */

void Unlock(void)

{
  int in_ECX;
  
  if (*(FILE **)(in_ECX + 0x54) != (FILE *)0x0) {
    __unlock_file(*(FILE **)(in_ECX + 0x54));
  }
  return;
}

