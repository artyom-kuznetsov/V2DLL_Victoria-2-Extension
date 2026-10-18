// FUN_00517c40 @ 00517c40 body=[[00517c40, 00517c59] [00517c60, 00517c9c]]


void FUN_00517c40(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  
  piVar1 = *(int **)(in_EAX + 0x9e8);
  iVar3 = DAT_012588e8;
  while (piVar1 != (int *)0x0) {
    iVar2 = *(int *)(*(int *)(iVar3 + 0xacc) + *piVar1 * 4);
    piVar1 = (int *)piVar1[2];
    if (*(int *)(iVar2 + 300) == param_2) {
      FUN_004b5730(iVar2,&param_1,iVar3 + 0xb0c,1);
      iVar3 = DAT_012588e8;
    }
  }
  return;
}

