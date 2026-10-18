// FUN_00737390 @ 00737390 body=[[00737390, 00737420] [00737424, 0073750b] [0073750f, 0073751e]]


void FUN_00737390(int *param_1)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  char *pcVar6;
  char local_68 [32];
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4bb48;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  ExceptionList = &local_10;
  pcVar2 = __itoa(*(int *)(in_ECX + 0xc4),local_68,10);
  pcVar6 = pcVar2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1));
  local_8 = 1;
  FUN_00988fa0(local_2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x60) + 0x34))(local_48);
  (**(code **)(*piVar3 + 0x48))(1);
  (**(code **)(*param_1 + 0x48))(2);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x44))();
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  uVar5 = FUN_00aaf0c5(puVar4 + 3);
  *(undefined4 *)(in_ECX + 0xc4) = uVar5;
  if (*(int *)(in_ECX + 0xe8) != *(int *)(in_ECX + 0xec)) {
    uVar5 = FUN_007387b0(*(int *)(in_ECX + 0xe8));
    *(undefined4 *)(in_ECX + 0xec) = uVar5;
  }
  if (*(int *)(in_ECX + 0xf8) != *(int *)(in_ECX + 0xfc)) {
    uVar5 = FUN_005e5ce0(*(int *)(in_ECX + 0xfc),param_1);
    FUN_005e5d30(param_1);
    *(undefined4 *)(in_ECX + 0xfc) = uVar5;
  }
  *(undefined1 *)(in_ECX + 0x160) = 1;
  if (*(char *)(in_ECX + 0x78) == '\0') {
    *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(in_ECX + 0xc4);
  }
  else {
    *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(in_ECX + 0xc4);
  }
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

