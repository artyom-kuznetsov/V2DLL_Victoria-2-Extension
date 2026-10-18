// FUN_00a5c4e0 @ 00a5c4e0 body=[[00a5c4e0, 00a5c579]]


void FUN_00a5c4e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (param_2 != 0xaf) {
    FUN_009ecfa0(param_1,param_2);
    return;
  }
  piVar2 = (int *)FUN_00aae9af(0x6c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 0x18d;
    piVar2[6] = 0;
    piVar2[7] = 0xf;
    *(undefined1 *)(piVar2 + 2) = 0;
    piVar2[0xe] = 0xf;
    piVar2[0xd] = 0;
    *(undefined1 *)(piVar2 + 9) = 0;
    piVar2[0x15] = 0xf;
    piVar2[0x14] = 0;
    *(undefined1 *)(piVar2 + 0x10) = 0;
    piVar2[0x17] = 0;
    piVar2[0x18] = 0;
    *piVar2 = (int)&PTR_FUN_00e41d84;
    piVar2[0x19] = 0;
    piVar2[0x1a] = 0;
  }
  (**(code **)(*piVar2 + 0xc))(param_1);
  iVar1 = *(int *)(in_ECX + 100);
  uVar3 = (**(code **)(*piVar2 + 0x18))(piVar2);
  (**(code **)(iVar1 + 0x18))(uVar3);
  return;
}

