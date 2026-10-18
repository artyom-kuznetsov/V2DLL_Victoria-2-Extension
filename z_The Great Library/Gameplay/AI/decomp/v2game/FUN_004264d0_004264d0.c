// FUN_004264d0 @ 004264d0 body=[[004264d0, 0042650c] [00426510, 0042656a]]


/* WARNING: Removing unreachable block (ram,0x004264e8) */

void FUN_004264d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EAX;
  int *piVar4;
  
  if (*in_EAX != in_EAX[1]) {
    in_EAX[1] = *in_EAX;
  }
  iVar3 = DAT_012588e8;
  piVar4 = *(int **)(DAT_012588e8 + 0xbe0);
  while ((*(int **)(iVar3 + 0xbe0) <= piVar4 && (piVar4 < *(int **)(iVar3 + 0xbe4)))) {
    iVar1 = *piVar4;
    iVar2 = *(int *)(iVar1 + 0x20);
    piVar4 = piVar4 + 1;
    if ((iVar2 != *(int *)(param_1 + 0x18)) &&
       ((iVar2 != *(int *)(param_1 + 0x20) && (*(char *)(iVar1 + 0x67c) == '\0')))) {
      FUN_004d61d0();
    }
  }
  FUN_0042ca60(*in_EAX,in_EAX[1],in_EAX[1] - *in_EAX >> 3,param_2);
  return;
}

