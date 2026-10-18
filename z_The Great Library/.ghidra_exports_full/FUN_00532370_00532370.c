// FUN_00532370 @ 00532370 body=[[00532370, 005323da] [005323e0, 005325dd]]


int * FUN_00532370(int param_1,int *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int local_34;
  int local_30;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  cVar2 = FUN_00531d50(param_3,1);
  if (cVar2 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  iVar4 = *DAT_012587e4;
  iVar5 = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_34 = 0;
  local_30 = 1;
  if (1 < iVar4) {
    do {
      iVar3 = *(int *)(DAT_012587e4[1] + local_30 * 4);
      local_28 = *(undefined4 *)(iVar3 + 0x1c);
      local_24 = *(int *)(iVar3 + 0x20);
      if (local_24 != 0) {
        local_20 = *(undefined4 *)(iVar3 + 0x1c);
        iVar1 = *(int *)(DAT_012587e4[1] + *(int *)(iVar3 + 0x20) * 4);
        if ((((0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU)) &&
             (local_24 != *(int *)(param_1 + 0x20))) &&
            (local_20 = *(undefined4 *)(iVar3 + 0x1c),
            *(char *)(*(int *)(DAT_012587e4[1] + *(int *)(iVar3 + 0x20) * 4) + 0x31) == '\0')) &&
           (cVar2 = FUN_00531d50(&local_28,1), cVar2 != '\0')) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x13f0) + local_30 * 4);
          (&local_18)[iVar3] = (&local_18)[iVar3] + 1;
          iVar5 = iVar5 + iVar3;
          local_34 = local_34 + 1;
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 < iVar4);
    if (local_34 != 0) {
      iVar4 = *(int *)(*(int *)(param_1 + 0xbcc) + 0x78);
      iVar3 = __alldiv((longlong)*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x5c) *
                       (longlong)(*(int *)(*(int *)(param_1 + 0xa60) + 0x308) + 1000),1000,0);
      iVar4 = __alldiv((longlong)iVar3 * (longlong)(iVar4 + 1000),1000,0);
      if (iVar5 != 0) {
        FUN_00401000(((float)*(int *)(*(int *)(param_1 + 0x13f0) + *(int *)(param_3 + 4) * 4) +
                     0.0005) * 1000.0);
        iVar3 = FUN_00b31c00();
        iVar4 = __alldiv((longlong)iVar3 * (longlong)iVar4,1000,0);
        local_34 = iVar5;
      }
      local_34 = local_34 * 1000;
      if (local_34 == 0) {
        *param_2 = -1;
        return param_2;
      }
      if ((-0x189374 < iVar4) && (iVar4 < 0x20c49b)) {
        *param_2 = (iVar4 * 1000) / local_34;
        return param_2;
      }
      uVar6 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
      iVar4 = __alldiv(uVar6,local_34,local_34 >> 0x1f);
      *param_2 = iVar4;
      return param_2;
    }
  }
  *param_2 = 0;
  return param_2;
}

