// FUN_00b20600 @ 00b20600 body=[[00b20600, 00b206d6]]


/* WARNING: Removing unreachable block (ram,0x00b20652) */

undefined8 FUN_00b20600(void *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint _Size;
  undefined4 *unaff_EDI;
  bool bVar2;
  longlong lVar3;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  do {
    if (param_3 == 0) {
LAB_00b206ab:
      return CONCAT44(local_c,local_10);
    }
    _Size = unaff_EDI[6] - unaff_EDI[7];
    uVar1 = param_2 * param_3 - local_8;
    if (_Size == 0) {
      lVar3 = (**(code **)(unaff_EDI[3] + 0x38))(*unaff_EDI,unaff_EDI[4],1,unaff_EDI[5]);
      _Size = (uint)lVar3;
      if (lVar3 < 1) {
        unaff_EDI[7] = unaff_EDI[7] - local_8;
        if ((lVar3 == -1) && (local_10 == 0 && local_c == 0)) {
          return 0xffffffffffffffff;
        }
        goto LAB_00b206ab;
      }
      unaff_EDI[6] = _Size;
      unaff_EDI[7] = 0;
    }
    if (uVar1 < _Size) {
      _Size = uVar1;
    }
    FID_conflict__memcpy(param_1,(void *)(unaff_EDI[4] + unaff_EDI[7]),_Size);
    unaff_EDI[7] = unaff_EDI[7] + _Size;
    param_1 = (void *)((int)param_1 + _Size);
    uVar1 = (_Size + local_8) / param_2;
    local_8 = (_Size + local_8) % param_2;
    bVar2 = CARRY4(local_10,uVar1);
    local_10 = local_10 + uVar1;
    local_c = local_c + (uint)bVar2;
    param_3 = param_3 - uVar1;
  } while( true );
}

