// FUN_0080e780 @ 0080e780 body=[[0080e780, 0080e88c]]


void FUN_0080e780(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 *local_10;
  undefined2 local_c [4];
  
  *(undefined1 *)(in_ECX + 0xa8) = 1;
  piVar1 = (int *)(in_ECX + 0x94);
  FUN_009f9630(piVar1,*(undefined4 *)(param_1 + 100),4,0xc,2,0);
  FUN_009f99d0(piVar1,*(undefined4 *)(param_1 + 100),6);
  piVar2 = (int *)*piVar1;
  if (piVar2 == (int *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    uVar3 = 0;
    if ((*(char *)(in_ECX + 0xa9) != '\0') && (*(char *)(in_ECX + 0xaa) == '\0')) {
      uVar3 = 0x2000;
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&local_10,uVar3);
  }
  puVar4 = local_c;
  (**(code **)(**(int **)(in_ECX + 0x98) + 0x2c))(*(int **)(in_ECX + 0x98),0,0,puVar4,0);
  local_10[1] = 0x3f051eb8;
  local_10[4] = 0x3f051eb8;
  local_10[7] = 0x3f051eb8;
  local_10[10] = 0x3f051eb8;
  *local_10 = 0xc1200000;
  local_10[2] = 0xc1200000;
  local_10[3] = 0xc1200000;
  local_10[5] = 0x41200000;
  local_10[6] = 0x41200000;
  local_10[8] = 0x41200000;
  local_10[9] = 0x41200000;
  local_10[0xb] = 0xc1200000;
  puVar4[5] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0x20001;
  *(undefined4 *)(puVar4 + 3) = 0x30002;
  (**(code **)(**(int **)(in_ECX + 0x98) + 0x30))(*(int **)(in_ECX + 0x98));
  (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1);
  return;
}

