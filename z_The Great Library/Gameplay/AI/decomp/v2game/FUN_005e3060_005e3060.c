// FUN_005e3060 @ 005e3060 body=[[005e3060, 005e30ec]]


void FUN_005e3060(void)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar3 = DAT_01258a98;
  }
  if (iVar3 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_009c1d40();
  }
  *(int **)(in_ECX + 0x3c) = piVar2;
  cVar1 = (**(code **)(*piVar2 + 0x28))();
  if (cVar1 != '\0') {
    FUN_004f9be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + piVar2[0x19] * 4),in_ECX + 100);
  }
  FUN_00408ed0(in_ECX + 100,0,0xffffffff);
  *(undefined2 *)(piVar2 + 0x22) = 0;
  return;
}

