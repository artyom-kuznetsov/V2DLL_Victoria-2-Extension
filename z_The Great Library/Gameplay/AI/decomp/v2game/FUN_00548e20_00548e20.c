// _Reset_back @ 00548e20 body=[[00548e20, 00548e40]]


/* Library Function - Single Match
    private: void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Reset_back(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  undefined4 uVar1;
  
  if ((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0x10) == this + 0x48) {
    uVar1 = *(undefined4 *)(this + 0x40);
    **(int **)(this + 0x10) = *(int *)(this + 0x3c);
    **(undefined4 **)(this + 0x20) = uVar1;
    **(undefined4 **)(this + 0x30) = 0;
  }
  return;
}

