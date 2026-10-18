// FUN_00b27850 @ 00b27850 body=[[00b27850, 00b27930]]


undefined4 FUN_00b27850(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  
  uVar4 = (uint)*(ushort *)(param_2 + 4);
  uVar3 = 0;
  iVar2 = FUN_00b2a2f0(param_1);
  pcVar6 = (char *)0x0;
  if (iVar2 != 0) {
    iVar2 = (*DAT_013f3aa8)(uVar4 * 0x30,0);
    *(int *)(param_2 + 8) = iVar2;
    if (iVar2 != 0) {
      if (uVar4 != 0) {
        do {
          iVar2 = FUN_00b27520(param_3);
          if (iVar2 == 0) {
            piVar1 = *(int **)(param_2 + 8);
            piVar5 = piVar1;
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              if (*piVar5 != 0) {
                (*DAT_013f3ab0)(*piVar5);
              }
              piVar5 = piVar5 + 0xc;
            }
            (*DAT_013f3ab0)(piVar1);
            return 0;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      FUN_00b1f7b0(*(undefined4 *)(param_2 + 8),uVar4,FUN_00b277b0,FUN_00b27800);
      return 1;
    }
    pcVar6 = "Out of memory";
  }
  FUN_00b1f840(pcVar6);
  return 0;
}

