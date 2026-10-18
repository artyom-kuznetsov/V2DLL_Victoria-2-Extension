// ___dtoxmode @ 00ac0563 body=[[00ac0563, 00ac061f]]


/* Library Function - Single Match
    ___dtoxmode
   
   Library: Visual Studio 2010 Release */

uint ___dtoxmode(byte param_1,uchar *param_2)

{
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = param_2;
  if (param_2[1] == ':') {
    puVar2 = param_2 + 2;
  }
  uVar1 = *puVar2;
  if ((((uVar1 == '\\') || (uVar1 == '/')) && (puVar2[1] == '\0')) ||
     (((param_1 & 0x10) != 0 || (uVar4 = 0x8000, uVar1 == '\0')))) {
    uVar4 = 0x4040;
  }
  uVar4 = uVar4 | ~((uint)param_1 << 7) & 0x80 | 0x100;
  puVar2 = __mbsrchr(param_2,0x2e);
  if (puVar2 != (uchar *)0x0) {
    iVar3 = __mbsicmp(puVar2,".exe");
    if (iVar3 != 0) {
      iVar3 = __mbsicmp(puVar2,".cmd");
      if (iVar3 != 0) {
        iVar3 = __mbsicmp(puVar2,".bat");
        if (iVar3 != 0) {
          iVar3 = __mbsicmp(puVar2,".com");
          if (iVar3 != 0) goto LAB_00ac0608;
        }
      }
    }
    uVar4 = uVar4 | 0x40;
  }
LAB_00ac0608:
  return (uVar4 & 0x1c0) >> 6 | uVar4 | uVar4 >> 3 & 0x38;
}

