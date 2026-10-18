// FUN_009890c0 @ 009890c0 body=[[009890c0, 009891ad]]


int FUN_009890c0(undefined4 *param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_8 [4];
  
  uVar5 = 0;
  if (in_EAX < (int)param_1[4]) {
    do {
      puVar2 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar2 = (undefined4 *)*param_1;
      }
      cVar1 = *(char *)((int)puVar2 + in_EAX);
      if ((uVar5 == 0) && (cVar1 == param_2)) {
        return in_EAX;
      }
      uVar4 = uVar5 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if ((uVar4 == 0) && (local_8[0] = cVar1, iVar3 = FUN_005484e0(param_3,local_8,1), iVar3 != -1)
         ) {
LAB_00989183:
        uVar5 = uVar5 + 1;
      }
      else if ((uVar4 == 0) &&
              (local_8[0] = cVar1, iVar3 = FUN_005484e0(param_4,local_8,1), iVar3 != -1)) {
        uVar5 = uVar5 - 1;
      }
      else if (uVar4 == 1) {
        local_8[0] = cVar1;
        iVar3 = FUN_005484e0(param_4,local_8,1);
        if (iVar3 == -1) {
          local_8[0] = cVar1;
          iVar3 = FUN_005484e0(param_3,local_8,1);
          if (iVar3 != -1) goto LAB_00989183;
        }
        else {
          uVar5 = uVar5 - 1;
        }
      }
      in_EAX = in_EAX + 1;
    } while (in_EAX < (int)param_1[4]);
  }
  return -1;
}

