// FUN_008e5380 @ 008e5380 body=[[008e5380, 008e53cc] [008e53d0, 008e5458] [008e546d, 008e5489]]


void FUN_008e5380(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *puVar5;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b56983;
  local_10 = ExceptionList;
  if (param_2 == 0xa6d) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar4 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_10;
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar4 - (param_1 + 0x22d));
    local_8 = 0;
    iVar2 = *(int *)(in_ECX + 0x20);
    puVar5 = (undefined1 *)FUN_00aae9af(0x28);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar5 + 0x14) = 0xf;
      *(undefined4 *)(puVar5 + 0x10) = 0;
      *puVar5 = 0;
      FUN_00408ed0(local_2c,0,0xffffffff);
      *(int *)(puVar5 + 0x1c) = iVar2;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      puVar5[0x24] = 0;
    }
    iVar3 = *(int *)(in_ECX + 0x24);
    *(undefined1 **)(in_ECX + 0x20) = puVar5;
    *(int *)(in_ECX + 0x24) = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined1 **)(in_ECX + 0x1c) = puVar5;
    }
    else {
      *(undefined1 **)(iVar2 + 0x20) = puVar5;
    }
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    ExceptionList = &local_10;
    FUN_008b33e0(param_1,param_2);
  }
  ExceptionList = local_10;
  return;
}

