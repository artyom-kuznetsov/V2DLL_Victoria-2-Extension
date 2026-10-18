// FUN_004e5a20 @ 004e5a20 body=[[004e5a20, 004e5b49]]


void FUN_004e5a20(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  
  cVar3 = FUN_004e7950(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (cVar3 != '\0') {
    (**(code **)(*(int *)(*(int *)(in_EAX + 0x30) + 0xd8) + 0x2c))(param_1,0);
    FUN_004e5dd0(in_EAX,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                 *(undefined4 *)(in_EAX + 0x44),*(undefined4 *)(in_EAX + 0x48));
    iVar5 = DAT_012587e4;
    iVar4 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 0x3c) * 4) + 0xbd0);
    iVar1 = *(int *)(*(int *)(*(int *)(in_EAX + 0x30) + 0x134) + *(int *)(iVar4 + 0x40) * 4);
    if (iVar1 != 0) {
      iVar4 = iVar1;
    }
    *(int *)(in_EAX + 0x40) = iVar4;
    if ((iVar4 != 0) &&
       (*(int *)(*(int *)(*(int *)(iVar5 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xbd0) != iVar4)) {
      FUN_00513a90(iVar4,1,0,0);
      iVar5 = DAT_012587e4;
    }
    FUN_00527d10(*(undefined4 *)(*(int *)(iVar5 + 4) + *(int *)(param_1 + 0xc) * 4));
    iVar4 = DAT_012587e4;
    piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x7b4);
    while (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = (int *)piVar2[2];
      *(undefined1 *)(iVar1 + 0xbc) = 1;
    }
    if (*(char *)(*(int *)(in_EAX + 0x30) + 0x144) != '\0') {
      FUN_00517250(*(undefined4 *)(*(int *)(iVar4 + 4) + *(int *)(param_1 + 0xc) * 4));
    }
  }
  return;
}

