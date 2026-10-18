// FUN_005345a0 @ 005345a0 body=[[005345a0, 0053470b]]


void FUN_005345a0(int param_1,int param_2,uint param_3,char param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int in_EAX;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint local_c;
  uint local_8;
  
  if (*(int *)(param_2 + 0x58) == 0) {
    FUN_00955a00();
  }
  if ((int)*(uint *)(in_EAX + 0x58) < (int)param_3) {
    param_3 = *(uint *)(in_EAX + 0x58);
  }
  local_c = 1;
  local_8 = 8;
  if ((*(int *)(in_EAX + 100) != 0) &&
     (*(int *)(*(int *)(in_EAX + 100) + 300) != *(int *)(param_1 + 0x20))) {
    local_c = 2;
    local_8 = 7;
  }
  if (param_4 != '\0') {
    local_8 = 6;
  }
  FUN_00955fd0();
  if (local_c < 9) {
    piVar1 = (int *)(param_2 + 0x158 + local_c * 4);
    *piVar1 = *piVar1 + param_3;
  }
  uVar2 = *(uint *)(in_EAX + 0x58);
  if (uVar2 != 0) {
    uVar5 = __alldiv(param_3 << 0x1e,((int)param_3 >> 0x1f) << 0x1e | param_3 >> 2,uVar2 << 0xf,
                     ((int)uVar2 >> 0x1f) << 0xf | uVar2 >> 0x11);
    lVar6 = __allmul(uVar5,*(undefined4 *)(in_EAX + 0x180),*(undefined4 *)(in_EAX + 0x184));
    lVar6 = lVar6 >> 0xf;
    lVar3 = lVar6 + *(longlong *)(param_2 + 0x180);
    if (lVar3 < 0) {
      *(undefined4 *)(param_2 + 0x180) = 0;
      *(undefined4 *)(param_2 + 0x184) = 0;
    }
    else {
      *(longlong *)(param_2 + 0x180) = lVar3;
    }
    iVar4 = (*(int *)(in_EAX + 0x184) - (int)((ulonglong)lVar6 >> 0x20)) -
            (uint)(*(uint *)(in_EAX + 0x180) < (uint)lVar6);
    if (iVar4 < 0) {
      *(undefined4 *)(in_EAX + 0x180) = 0;
      *(undefined4 *)(in_EAX + 0x184) = 0;
    }
    else {
      *(uint *)(in_EAX + 0x180) = *(uint *)(in_EAX + 0x180) - (uint)lVar6;
      *(int *)(in_EAX + 0x184) = iVar4;
    }
    FUN_00955fd0();
    if (local_8 < 9) {
      piVar1 = (int *)(in_EAX + 0x158 + local_8 * 4);
      *piVar1 = *piVar1 - param_3;
    }
  }
  FUN_00955f20(*(undefined4 *)(in_EAX + 100));
  return;
}

