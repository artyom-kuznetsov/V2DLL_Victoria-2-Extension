// FUN_00addb10 @ 00addb10 body=[[00addb10, 00addc50]]


int FUN_00addb10(char param_1)

{
  void *_Dst;
  size_t _Size;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  uint uVar7;
  int local_c;
  int local_8;
  uint local_4;
  
  local_c = in_ECX[7];
  uVar6 = 0;
  local_8 = 0;
  local_4 = 0;
  iVar4 = 0;
  if (local_c != 0) {
    do {
      iVar4 = in_ECX[4];
      iVar5 = *(int *)(iVar4 + uVar6 * 4);
      iVar1 = *(int *)(iVar4 + 4 + uVar6 * 4);
      iVar2 = *(int *)(iVar4 + 8 + uVar6 * 4);
      if (((iVar5 == iVar1) || (iVar5 == iVar2)) || (iVar1 == iVar2)) {
        _Size = (in_ECX[7] - uVar6) * 4 - 0xc;
        if (_Size != 0) {
          FID_conflict__memcpy((void *)(iVar4 + uVar6 * 4),(void *)(iVar4 + 0xc + uVar6 * 4),_Size);
        }
        local_8 = local_8 + 1;
        local_c = local_c + -3;
        uVar7 = 0;
        if (in_ECX[1] != 0) {
          do {
            iVar4 = *(int *)(*in_ECX + uVar7 * 4);
            uVar3 = *(uint *)(iVar4 + 0x14);
            if (uVar7 < in_ECX[1] - 1U) {
              if (uVar6 < uVar3) goto LAB_00addbb7;
              if (uVar6 < *(uint *)(*(int *)(*in_ECX + uVar7 * 4 + 4) + 0x14)) goto LAB_00addbad;
LAB_00addbb1:
              if ((uVar6 <= uVar3) && (uVar3 != uVar6)) goto LAB_00addbb7;
            }
            else {
              if (uVar3 <= uVar6) {
LAB_00addbad:
                *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + -3;
                goto LAB_00addbb1;
              }
LAB_00addbb7:
              *(uint *)(iVar4 + 0x14) = uVar3 - 3;
            }
            if ((*(int *)(iVar4 + 0x1c) == 0) && (param_1 != '\0')) {
              if ((1 < (uint)in_ECX[1]) && (iVar4 = (in_ECX[1] - uVar7) + -1, iVar4 != 0)) {
                _Dst = (void *)(*in_ECX + uVar7 * 4);
                FID_conflict__memcpy(_Dst,(void *)((int)_Dst + 4),iVar4 * 4);
              }
              in_ECX[1] = in_ECX[1] + -1;
            }
            else {
              uVar7 = uVar7 + 1;
            }
          } while (uVar7 < (uint)in_ECX[1]);
        }
      }
      else {
        uVar6 = uVar6 + 3;
      }
      local_4 = local_4 + 3;
      iVar4 = local_8;
    } while (local_4 < (uint)in_ECX[7]);
  }
  if (local_c != in_ECX[7]) {
    iVar5 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[4],local_c * 4,0xca,0x20,100,0,0);
    in_ECX[4] = iVar5;
  }
  in_ECX[7] = local_c;
  return iVar4;
}

