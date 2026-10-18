// FUN_00b2f370 @ 00b2f370 body=[[00b2f370, 00b2f634]]


void FUN_00b2f370(int param_1,uint *param_2,int param_3,void *param_4,uint param_5,
                 undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  uint uVar2;
  size_t _Size;
  int iVar3;
  void *_Dst;
  int iVar4;
  uint uVar5;
  uint local_4c;
  void *local_40;
  uint local_3c;
  uint local_30;
  uint local_2c;
  int local_28;
  uint *local_24;
  uint local_20 [6];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  uVar5 = 0;
  local_24 = param_2;
  local_2c = param_5;
  local_20[3] = 0;
  local_20[4] = 0;
  local_4c = 0;
  local_40 = (void *)0x0;
  iVar3 = FUN_00b2f130(param_2);
  if ((iVar3 == 0) && (local_30 = *local_24, local_30 != 0)) {
    do {
      iVar1 = *(int *)(local_24[1] + 8 + uVar5 * 0x18);
      iVar3 = local_24[1] + uVar5 * 0x18;
      uVar2 = *(uint *)(iVar3 + 0xc);
      if ((iVar1 == 0 && uVar2 == 0) || ((iVar1 == 0x30101 && (uVar2 == 0)))) {
        local_3c = 0;
        _Dst = param_4;
        if (local_30 == 4) {
          param_5 = *(uint *)(local_24[6] + uVar5 * 8);
          iVar1 = *(int *)(local_24[6] + 4 + uVar5 * 8);
          local_20[0] = 3;
          local_20[1] = 2;
          local_20[2] = 0;
          local_3c = local_20[uVar5];
          if (uVar5 < 2) {
            if ((iVar1 != 0) ||
               ((_Dst = (void *)(*(code *)*param_6)(param_5), _Dst == (void *)0x0 && (param_5 != 0))
               )) {
LAB_00b2f5f3:
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            param_7[1 - uVar5] = _Dst;
            local_20[4 - uVar5] = param_5;
          }
          else {
            if (uVar5 != 2) goto LAB_00b2f609;
            if ((iVar1 != 0) || (local_2c < param_5)) goto LAB_00b2f5f3;
            _Dst = (void *)((local_2c - param_5) + (int)param_4);
            local_4c = param_5;
            local_40 = _Dst;
          }
        }
        iVar4 = FUN_00b2f2f0(local_28,local_3c);
        _Size = *(size_t *)(local_28 + local_3c * 8);
        iVar1 = *(int *)(local_28 + 4 + local_3c * 8);
        if (*(int *)(iVar3 + 8) != 0 || *(int *)(iVar3 + 0xc) != 0) {
          iVar3 = FUN_00b2f040(iVar3,_Size,iVar1,iVar4 + param_3,_Dst,param_5,param_6);
          param_5 = local_2c;
          goto joined_r0x00b2f5c7;
        }
        if ((_Size != param_5) || (iVar1 != 0)) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        FID_conflict__memcpy(_Dst,(void *)(iVar4 + param_3),_Size);
        param_5 = local_2c;
      }
      else if ((iVar1 == 0x3030103) && (uVar2 == 0)) {
        if (uVar5 != 1) goto LAB_00b2f609;
        local_30 = uVar2;
        FUN_00b31550(param_4,param_5,0,&local_30,0);
      }
      else {
        if ((iVar1 != 0x303011b) || (uVar2 != 0)) {
LAB_00b2f609:
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        iVar3 = FUN_00b2f2f0(local_28,1);
        if (uVar5 != 3) goto LAB_00b2f609;
        iVar3 = FUN_00b312a0(local_40,local_4c,*param_7,local_20[3],param_7[1],local_20[4],
                             iVar3 + param_3,*(undefined4 *)(local_28 + 8),param_4,param_5);
joined_r0x00b2f5c7:
        if (iVar3 != 0) break;
      }
      local_30 = *local_24;
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_30);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

