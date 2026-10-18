// FUN_00514030 @ 00514030 body=[[00514030, 005141cb]]


undefined4 FUN_00514030(int param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(param_2 + 0x134) != *(int *)(param_1 + 0x20)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 1;
    }
    return 0;
  }
  if (2 < *(int *)(in_ECX + 0x24)) {
    if (*(char *)(*(int *)(in_ECX + 0x24) + *(int *)(*(int *)(param_1 + 0xbcc) + 0x2dc)) != '\0') {
      if (*(char *)(in_ECX + 0x42) == '\0') {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 3;
        }
        return 0;
      }
      if (((in_EAX != 0) && (*(char *)(in_ECX + 0x30) != '\0')) &&
         (*(char *)(in_EAX + 0x4c) == '\0')) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 4;
        }
        return 0;
      }
      if (*(char *)(in_ECX + 0x39) == '\0') {
        if (*(char *)(in_ECX + 0x3a) != '\0') {
          if ((*(char *)(in_ECX + 0x3d) == '\0') && (cVar1 = FUN_004b1660(param_2), cVar1 == '\0'))
          {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 7;
            }
            return 0;
          }
          iVar2 = *(int *)(*(int *)(param_2 + 0x118) + DAT_01258720 * 4);
          iVar3 = 0;
          if (0 < *(int *)(iVar2 + 0x20)) {
            iVar3 = *(int *)(iVar2 + 0x24) / 1000;
          }
          if (iVar3 < *(int *)(in_ECX + 0xa0)) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 6;
            }
            return 0;
          }
          iVar2 = FUN_00539160();
          if ((-1 < iVar2) && (iVar3 = FUN_00539130(), iVar2 <= iVar3)) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = 8;
            }
            return 0;
          }
        }
      }
      else {
        if (*(int *)(param_2 + 0x50) <= *(int *)(param_2 + 0x4c)) {
LAB_00514100:
          if (param_3 != (undefined4 *)0x0) {
            *param_3 = 5;
          }
          return 0;
        }
        if (in_EAX != 0) {
          iVar2 = FUN_00965930(0);
          iVar3 = FUN_00965870(in_EAX,0);
          if (iVar3 <= iVar2) goto LAB_00514100;
        }
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
      }
      return 1;
    }
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 2;
  }
  return 0;
}

