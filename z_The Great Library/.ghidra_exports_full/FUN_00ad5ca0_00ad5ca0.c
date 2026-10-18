// FUN_00ad5ca0 @ 00ad5ca0 body=[[00ad5ca0, 00ad5dd1]]


void FUN_00ad5ca0(int *param_1,byte param_2,int param_3)

{
  uint uVar1;
  uint _Size;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_c;
  
  uVar1 = param_1[1];
  _Size = *(uint *)(in_ECX + 0x84);
  if (((_Size != uVar1) && (param_1[1] = _Size, uVar1 < _Size)) && ((uint)param_1[2] < _Size)) {
    FUN_00b087f0(_Size);
  }
  _memset((void *)*param_1,0,_Size);
  local_c = 0;
  if (_Size != 0) {
    do {
      iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x80) + local_c * 4) + 0x1c);
      if (((*(int *)(iVar2 + 4 + param_3 * 0x20) != 0) &&
          (iVar2 = (**(code **)(**(int **)(iVar2 + 4 + param_3 * 0x20) + 0x10))(), iVar2 != 0)) &&
         (iVar3 = FUN_00add2c0(3,0), iVar3 != 0)) {
        uVar1 = *(uint *)(iVar2 + 0x14);
        uVar7 = 0;
        if (uVar1 != 0) {
          do {
            uVar6 = (uint)*(byte *)(*(int *)(iVar3 + 0x1c) + 4 + uVar7 * 8);
            uVar5 = 0;
            if (uVar6 != 0) {
              do {
                uVar4 = (uint)*(ushort *)
                               (*(int *)(iVar3 + 0xc) + 6 +
                               (*(int *)(*(int *)(iVar3 + 0x1c) + uVar7 * 8) + (uVar5 & 0xff)) * 8);
                if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x80) + uVar4 * 4) + 0xc) &
                    1 << (param_2 & 0x1f)) == 0) {
                  *(undefined1 *)(uVar4 + *param_1) = 1;
                }
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar6);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar1);
        }
      }
      local_c = local_c + 1;
    } while (local_c < _Size);
  }
  return;
}

