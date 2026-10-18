// FUN_005fcb30 @ 005fcb30 body=[[005fcb30, 005fccbb]]


void FUN_005fcb30(int param_1)

{
  int *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  if ((int *)in_EAX[0x38] != (int *)0x0) {
    (**(code **)(*(int *)in_EAX[0x38] + 0x100))(param_1);
  }
  in_EAX[0x3a] = param_1;
  *(int *)(in_EAX[0x30] + 0x126) = param_1;
  if (in_EAX[0x41] != 0) {
    local_8 = CONCAT22(param_1._2_2_,0xffff);
    FUN_009cb4a0(local_8);
  }
  iVar1 = (**(code **)(*in_EAX + 0x2c))();
  iVar1 = *(int *)(iVar1 + 8);
  in_EAX[0x53] = iVar1;
  if (0 < iVar1) {
    if (*(char *)((int)in_EAX + 0x146) == '\0') {
      puVar2 = (undefined4 *)(**(code **)(*in_EAX + 0x2c))();
      iVar1 = (**(code **)(*(int *)(*(int *)*puVar2 + 0x1c) + 0x14))(&local_10);
      iVar3 = (int)((float)(int)*(short *)((int)in_EAX + 0xea) / (float)(int)*(short *)(iVar1 + 2));
      iVar1 = in_EAX[0x53] - iVar3;
      in_EAX[0x54] = iVar3;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (in_EAX[0x41] != 0) {
        iVar3 = *(int *)(in_EAX[0x41] + 0x54);
        local_c = iVar1 * 1000;
        local_8 = 1000;
        local_10 = 0;
        FUN_0043d130(&local_8);
        (**(code **)(iVar3 + 0x14))();
      }
    }
    else if ((in_EAX[0x55] != -1) && (in_EAX[0x55] < in_EAX[0x1a])) {
      if (*(int *)in_EAX[0x18] == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)in_EAX[0x18] + -0x1c;
      }
      (**(code **)(*in_EAX + 0x20))(iVar1,1);
    }
  }
  (**(code **)(*in_EAX + 0x6c))();
  *(int *)(in_EAX[0x30] + 0x126) = in_EAX[0x3a];
  if ((in_EAX[0x54] <= in_EAX[0x53]) && ((int *)in_EAX[0x41] != (int *)0x0)) {
    (**(code **)(*(int *)in_EAX[0x41] + 0x38))();
  }
  return;
}

