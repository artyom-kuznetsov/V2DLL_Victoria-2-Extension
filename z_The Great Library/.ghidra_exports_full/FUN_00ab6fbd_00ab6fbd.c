// x64toa_s @ 00ab6fbd body=[[00ab6fbd, 00ab70a8]]


/* Library Function - Single Match
    @x64toa_s@24
   
   Library: Visual Studio 2010 Release
   __fastcall x64toa_s,24 */

int __fastcall
x64toa_s(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5,int param_6,
        char *param_7)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint extraout_ECX;
  char *pcVar4;
  char *unaff_EDI;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint local_8;
  
  if ((unaff_EDI == (char *)0x0) || (param_5 == 0)) {
LAB_00ab6fcc:
    piVar2 = __errno();
    iVar8 = 0x16;
  }
  else {
    *unaff_EDI = '\0';
    if ((param_7 != (char *)0x0) + 1 < param_5) {
      if (param_6 - 2U < 0x23) {
        bVar6 = param_7 != (char *)0x0;
        param_7 = unaff_EDI;
        if (bVar6) {
          bVar5 = param_3 != 0;
          param_3 = -param_3;
          *unaff_EDI = '-';
          param_7 = unaff_EDI + 1;
          param_4 = -(param_4 + (uint)bVar5);
        }
        lVar7 = CONCAT44(param_4,param_3);
        local_8 = (uint)bVar6;
        pcVar1 = param_7;
        do {
          pcVar4 = pcVar1;
          lVar7 = __aulldvrm(lVar7,param_6,0);
          if (extraout_ECX < 10) {
            cVar3 = (char)extraout_ECX + '0';
          }
          else {
            cVar3 = (char)extraout_ECX + 'W';
          }
          *pcVar4 = cVar3;
          local_8 = local_8 + 1;
        } while ((lVar7 != 0) && (pcVar1 = pcVar4 + 1, local_8 < param_5));
        if (local_8 < param_5) {
          pcVar4[1] = '\0';
          do {
            cVar3 = *pcVar4;
            *pcVar4 = *param_7;
            pcVar4 = pcVar4 + -1;
            *param_7 = cVar3;
            param_7 = param_7 + 1;
          } while (param_7 < pcVar4);
          return 0;
        }
        *unaff_EDI = '\0';
        piVar2 = __errno();
        iVar8 = 0x22;
        *piVar2 = 0x22;
        goto LAB_00ab6fd6;
      }
      goto LAB_00ab6fcc;
    }
    piVar2 = __errno();
    iVar8 = 0x22;
  }
  *piVar2 = iVar8;
LAB_00ab6fd6:
  FUN_00ab7c17();
  return iVar8;
}

