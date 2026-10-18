// FUN_005c93b0 @ 005c93b0 body=[[005c93b0, 005c945d]]


void FUN_005c93b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined1 local_10 [4];
  int local_c;
  
  uVar4 = DAT_012587e4;
  *(undefined4 *)(unaff_ESI + 0x144) = 0;
  FUN_0055c6c0(uVar4,local_10,&DAT_00dfdc14);
  iVar1 = *(int *)(unaff_ESI + 0xc4);
  piVar2 = *(int **)(unaff_ESI + 0x38);
  while (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    piVar2 = (int *)piVar2[2];
    *(undefined4 *)(iVar3 + 0x60) = param_1;
    *(int *)(iVar3 + 100) = param_2;
  }
  *(undefined4 *)(unaff_ESI + 0xc0) = param_1;
  *(int *)(unaff_ESI + 0xc4) = param_2;
  if ((*(int *)(unaff_ESI + 0xcc) == 0) || (*(int *)(unaff_ESI + 0xcc) == local_c)) {
    *(undefined4 *)(unaff_ESI + 200) = param_1;
    *(int *)(unaff_ESI + 0xcc) = param_2;
  }
  if ((iVar1 != param_2) && (*(int *)(unaff_ESI + 0x108) != 0)) {
    *(undefined4 *)(unaff_ESI + 0x18c) = 0;
    FUN_005cae80(unaff_ESI);
  }
  return;
}

