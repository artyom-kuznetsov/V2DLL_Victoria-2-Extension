// _TestDefaultCountry @ 00ac26f2 body=[[00ac26f2, 00ac2716]]


/* Library Function - Single Match
    _TestDefaultCountry
   
   Library: Visual Studio 2010 Release */

undefined4 _TestDefaultCountry(short param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 == *(short *)((int)&DAT_00ddb790 + uVar1)) {
      return 0;
    }
    uVar1 = uVar1 + 2;
  } while (uVar1 < 0x14);
  return 1;
}

