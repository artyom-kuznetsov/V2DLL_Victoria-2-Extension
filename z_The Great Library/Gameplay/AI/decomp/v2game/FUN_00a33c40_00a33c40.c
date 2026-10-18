// FUN_00a33c40 @ 00a33c40 body=[[00a33c40, 00a33d0f] [00a33d13, 00a33d2c] [00a33d30, 00a33d3f]]


void FUN_00a33c40(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  pcVar2 = in_ECX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(in_ECX,(int)pcVar2 - (int)(in_ECX + 1));
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00dede68,4);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_2c);
  FUN_00408ed0(local_48,0,0xffffffff);
  FUN_00a5ecc0(local_48,1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

