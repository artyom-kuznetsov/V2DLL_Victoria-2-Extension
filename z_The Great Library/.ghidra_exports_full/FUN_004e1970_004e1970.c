// FUN_004e1970 @ 004e1970 body=[[004e1970, 004e19c5]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

uint FUN_004e1970(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EDI;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0x4e1986;
  iVar2 = -(*(int *)(unaff_EDI + 0x88) * 4 + 4);
  piVar4 = (int *)(&stack0xfffffff8 + iVar2);
  *(undefined1 **)((int)&uStack_c + iVar2) = &stack0xfffffff8 + iVar2;
  *(undefined4 *)((int)&uStack_10 + iVar2) = 0x4e1990;
  FUN_004e3850();
  iVar1 = *(int *)(&stack0xfffffff8 + iVar2);
  piVar3 = (int *)(&stack0xfffffff8 + iVar2);
  while( true ) {
    if (iVar1 == 0) {
      return (uint)piVar3 & 0xffffff00;
    }
    iVar1 = *piVar4;
    piVar4 = piVar4 + 1;
    if (*(int *)(iVar1 + 0xd4) == param_2) break;
    iVar1 = *piVar4;
    piVar3 = piVar4;
  }
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

