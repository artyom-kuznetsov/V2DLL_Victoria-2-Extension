// __wincmdln @ 00abdbaf body=[[00abdbaf, 00abdc0d]]


/* Library Function - Single Match
    __wincmdln
   
   Library: Visual Studio 2010 Release */

byte * __wincmdln(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = false;
  if (DAT_013f3bf0 == 0) {
    ___initmbctable();
  }
  pbVar4 = DAT_013f3bf8;
  if (DAT_013f3bf8 == (byte *)0x0) {
    pbVar4 = &DAT_00ded94d;
  }
  do {
    bVar1 = *pbVar4;
    if (bVar1 < 0x21) {
      if (bVar1 == 0) {
        return pbVar4;
      }
      if (!bVar2) {
        for (; (*pbVar4 != 0 && (*pbVar4 < 0x21)); pbVar4 = pbVar4 + 1) {
        }
        return pbVar4;
      }
    }
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar3 = __ismbblead((uint)bVar1);
    if (iVar3 != 0) {
      pbVar4 = pbVar4 + 1;
    }
    pbVar4 = pbVar4 + 1;
  } while( true );
}

