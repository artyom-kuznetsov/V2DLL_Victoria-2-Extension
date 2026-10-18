// FUN_009ecfa0 @ 009ecfa0 body=[[009ecfa0, 009ed05c] [009ed060, 009ed085] [009ed09c, 009ed131] [009ed135, 009ed14b] [009ed162, 009ed1c1]]


void FUN_009ecfa0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int in_ECX;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b638a8;
  local_10 = ExceptionList;
  if (param_2 < 0x195) {
    if (param_2 == 0x194) {
      ExceptionList = &local_10;
      uVar4 = FUN_009ad510();
      iVar2 = FUN_009ad9d0(uVar4);
      *(int *)(in_ECX + 0x5c) = iVar2;
      if (iVar2 != 0) {
        ExceptionList = local_10;
        return;
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      FUN_00409350("Couldn\'t find localization string: ",0x23);
      local_8 = 0;
      pcVar3 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00448740((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
      if (local_34 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48);
    }
    if (param_2 == 0x1a) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 8,0);
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0xa2) {
      return;
    }
  }
  else {
    if (param_2 == 0x195) {
      ExceptionList = &local_10;
      uVar4 = FUN_009ad510();
      uVar4 = FUN_009ad9d0(uVar4);
      *(undefined4 *)(in_ECX + 0x60) = uVar4;
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x1aa) {
      pcVar3 = (char *)(param_1 + 0x22c);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ExceptionList = &local_10;
      FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
      ExceptionList = local_10;
      return;
    }
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("Bad gui scripted in: ",0x15);
  local_8 = 1;
  FUN_00448aa0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
  FUN_00448740(" line: ",7);
  uVar4 = FUN_009888f0(local_64);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00448aa0(uVar4,0,0xffffffff);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  if (local_18 < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c);
}

