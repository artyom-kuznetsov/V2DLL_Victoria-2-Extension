// FUN_00a1bf60 @ 00a1bf60 body=[[00a1bf60, 00a1c1b3]]


int FUN_00a1bf60(undefined4 *param_1,int *param_2,uint param_3)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  uint local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  uint local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c [2];
  
  iVar3 = 0;
  if (in_ECX == (undefined4 *)0x0) {
    return -0x66;
  }
  pcVar1 = (char *)*in_ECX;
  if (*pcVar1 == '\0') {
    *(undefined4 *)(pcVar1 + 0x1c) = in_ECX[5] + in_ECX[3];
LAB_00a1bfa7:
    iVar2 = FUN_00a1bae0(local_c);
    if (iVar2 == 0) {
      if (local_c[0] != 0x2014b50) {
        iVar3 = -0x67;
      }
      goto LAB_00a1bfcc;
    }
  }
  else if (pcVar1[1] != '\0') {
    SetFilePointer(*(HANDLE *)(pcVar1 + 4),*(int *)(pcVar1 + 0xc) + in_ECX[5] + in_ECX[3],(PLONG)0x0
                   ,0);
    goto LAB_00a1bfa7;
  }
  iVar3 = -1;
LAB_00a1bfcc:
  iVar2 = FUN_00a1ba50(&local_60);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_5c);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_58);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_54);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1bae0(&local_50);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  local_1c = local_50 >> 0x10 & 0x1f;
  local_14 = (local_50 >> 0x19) + 0x7bc;
  local_18 = (local_50 >> 0x15 & 0xf) - 1;
  local_20 = local_50 >> 0xb & 0x1f;
  local_24 = local_50 >> 5 & 0x3f;
  local_28 = (local_50 & 0x1f) * 2;
  iVar2 = FUN_00a1bae0(local_4c);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1bae0(local_48);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1bae0(local_44);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(&local_40);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_3c);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_38);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_34);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1ba50(local_30);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1bae0(local_2c);
  if (iVar2 != 0) {
    iVar3 = -1;
  }
  iVar2 = FUN_00a1bae0(local_c);
  if (iVar2 != 0) {
    return -1;
  }
  if (iVar3 == 0) {
    if (in_EAX != 0) {
      if (local_40 < param_3) {
        *(undefined1 *)(local_40 + in_EAX) = 0;
      }
      if (((local_40 != 0) && (param_3 != 0)) && (iVar2 = FUN_00a1b9e0(), iVar2 != 1)) {
        return -1;
      }
    }
    if (param_1 != (undefined4 *)0x0) {
      puVar4 = &local_60;
      for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *puVar4;
        puVar4 = puVar4 + 1;
        param_1 = param_1 + 1;
      }
    }
    if (param_2 != (int *)0x0) {
      *param_2 = local_c[0];
    }
  }
  return iVar3;
}

