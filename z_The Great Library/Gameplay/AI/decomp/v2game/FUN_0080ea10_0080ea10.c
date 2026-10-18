// FUN_0080ea10 @ 0080ea10 body=[[0080ea10, 0080ea5e] [0080ea60, 0080ebcf] [0080ebd3, 0080ebe5]]


void FUN_0080ea10(int param_1)

{
  void *_Dst;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eba8;
  local_10 = ExceptionList;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_004bf300(in_ECX[2]);
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = local_28;
  puVar4 = local_20;
  do {
    if (puVar1 == (undefined4 *)0x0) {
      piVar7 = (int *)(param_1 + 8);
      if (((int)local_24 - (int)puVar5 & 0xfffffffcU) == 0) {
        FUN_009beeb0(piVar7);
      }
      else {
        FUN_00413a70(local_24,*piVar7,*(undefined4 *)(param_1 + 0xc),param_1);
      }
      _Dst = (void *)*piVar7;
      if (_Dst != *(void **)(param_1 + 0xc)) {
        FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0xc),0);
        *(void **)(param_1 + 0xc) = _Dst;
      }
      puVar1 = local_28;
      if ((*(int *)(param_1 + 0xc) - *piVar7 & 0xfffffffcU) == 0) {
        FUN_009beeb0(&local_28);
      }
      else {
        FUN_00413a70(*(int *)(param_1 + 0xc),local_28,local_24,param_1);
      }
      if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar1);
      }
      ExceptionList = local_10;
      return;
    }
    local_18 = (undefined4 *)puVar1[2];
    if ((puVar1 < local_24) && (puVar5 <= puVar1)) {
      iVar6 = (int)puVar1 - (int)puVar5;
      if (local_24 == puVar4) {
        uVar2 = (int)local_24 - (int)puVar5 >> 2;
        if (0x3ffffffe < uVar2) {
LAB_0080eb4f:
                    /* WARNING: Subroutine does not return */
          FUN_00aad3ad("vector<T> too long");
        }
        uVar2 = uVar2 + 1;
        uVar3 = (int)puVar4 - (int)puVar5 >> 2;
        if (uVar3 < uVar2) {
          if (0x3fffffff - (uVar3 >> 1) < uVar3) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + (uVar3 >> 1);
          }
          if (uVar3 < uVar2) {
            uVar3 = uVar2;
          }
          FUN_004bf300(uVar3);
          puVar4 = local_20;
          puVar5 = local_28;
        }
      }
      if (local_24 != (undefined4 *)0x0) {
        *local_24 = puVar5[iVar6 >> 2];
      }
    }
    else {
      if (local_24 == puVar4) {
        uVar2 = (int)local_24 - (int)puVar5 >> 2;
        if (0x3ffffffe < uVar2) goto LAB_0080eb4f;
        uVar2 = uVar2 + 1;
        uVar3 = (int)puVar4 - (int)puVar5 >> 2;
        if (uVar3 < uVar2) {
          if (0x3fffffff - (uVar3 >> 1) < uVar3) {
            uVar3 = 0;
          }
          else {
            uVar3 = uVar3 + (uVar3 >> 1);
          }
          if (uVar3 < uVar2) {
            uVar3 = uVar2;
          }
          FUN_004bf300(uVar3);
          puVar4 = local_20;
          puVar5 = local_28;
        }
      }
      if (local_24 != (undefined4 *)0x0) {
        *local_24 = *puVar1;
      }
    }
    local_24 = local_24 + 1;
    puVar1 = local_18;
  } while( true );
}

