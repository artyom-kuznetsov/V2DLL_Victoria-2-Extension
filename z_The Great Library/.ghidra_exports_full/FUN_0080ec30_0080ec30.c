// FUN_0080ec30 @ 0080ec30 body=[[0080ec30, 0080eeaf] [0080eeb3, 0080eed3] [0080eed7, 0080ef17] [0080ef1b, 0080ef24] [0080ef28, 0080ef38]]


void FUN_0080ec30(int param_1)

{
  int *piVar1;
  void *_Dst;
  undefined4 uVar2;
  int iVar3;
  float *_Src;
  float fVar4;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  float *local_30;
  float *local_2c;
  float *local_28;
  float local_20 [2];
  void *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b61bc0;
  local_10 = ExceptionList;
  if (DAT_012589ec == (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(param_1 + 100) + 0x158))
              (*(int **)(param_1 + 100),&DAT_00f092e4,&DAT_012589f0);
    DAT_012589ec = (int *)FUN_00aae9af(0x24);
    if (DAT_012589ec == (int *)0x0) {
      DAT_012589ec = (int *)0x0;
    }
    else {
      *DAT_012589ec = 0;
      DAT_012589ec[1] = 0;
      DAT_012589ec[2] = 0;
      DAT_012589ec[3] = 0;
      DAT_012589ec[4] = 0;
      *(undefined1 *)(DAT_012589ec + 5) = 1;
      DAT_012589ec[6] = 0;
      DAT_012589ec[7] = 0;
      DAT_012589ec[8] = 1;
    }
    _Src = (float *)0x0;
    local_30 = (float *)0x0;
    local_2c = (float *)0x0;
    local_28 = (float *)0x0;
    local_8 = 0;
    local_18[0] = (void *)0x0;
    do {
      fVar4 = (float)(int)local_18[0];
      local_20[1] = DAT_00f17898;
      local_20[0] = fVar4;
      if ((local_20 < local_2c) && (_Src <= local_20)) {
        iVar3 = (int)local_20 - (int)_Src >> 3;
        if (local_2c == local_28) {
          FUN_00810820();
          _Src = local_30;
        }
        if (local_2c != (float *)0x0) {
          *local_2c = _Src[iVar3 * 2];
          local_2c[1] = _Src[iVar3 * 2 + 1];
        }
      }
      else {
        if (local_2c == local_28) {
          FUN_00810820();
          _Src = local_30;
        }
        if (local_2c != (float *)0x0) {
          *local_2c = fVar4;
          local_2c[1] = local_20[1];
        }
      }
      local_2c = local_2c + 2;
      local_20[1] = DAT_00f1f768;
      if ((local_20 < local_2c) && (_Src <= local_20)) {
        iVar3 = (int)local_20 - (int)_Src >> 3;
        if (local_2c == local_28) {
          FUN_00810820();
          _Src = local_30;
        }
        if (local_2c != (float *)0x0) {
          *local_2c = _Src[iVar3 * 2];
          local_2c[1] = _Src[iVar3 * 2 + 1];
        }
      }
      else {
        if (local_2c == local_28) {
          FUN_00810820();
          _Src = local_30;
        }
        if (local_2c != (float *)0x0) {
          *local_2c = fVar4;
          local_2c[1] = local_20[1];
        }
      }
      piVar1 = DAT_012589ec;
      local_2c = local_2c + 2;
      local_18[0] = (void *)((int)local_18[0] + 1);
    } while ((int)local_18[0] < 0x10);
    uVar2 = *(undefined4 *)(param_1 + 100);
    iVar3 = (int)local_2c - (int)_Src >> 3;
    DAT_012589ec[2] = DAT_012589f0;
    FUN_009f9630(piVar1,uVar2,iVar3,8,0,0);
    piVar1 = (int *)*DAT_012589ec;
    _Dst = (void *)0x0;
    if (piVar1 != (int *)0x0) {
      uVar2 = 0;
      if ((*(char *)((int)DAT_012589ec + 0x15) != '\0') &&
         (*(char *)((int)DAT_012589ec + 0x16) == '\0')) {
        uVar2 = 0x2000;
      }
      (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,local_18,uVar2);
      _Dst = local_18[0];
    }
    piVar1 = DAT_012589ec;
    FID_conflict__memcpy(_Dst,_Src,iVar3 * 8);
    (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1);
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350("railroad",8);
    local_8._0_1_ = 1;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_00409350("gfx/FX/railroad.fx",0x12);
    local_8._0_1_ = 2;
    DAT_012589f4 = FUN_009be510(param_1 + 0x6bcfc,local_4c,local_68,*(undefined4 *)(param_1 + 100));
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_4c[0]);
    }
    local_8._0_1_ = 0;
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    local_54 = 0xf;
    local_58 = 0;
    local_68[0] = local_68[0] & 0xffffff00;
    FUN_00409350("gfx/anims/railroad.dds",0x16);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_009bcbf0(local_68,1);
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_68[0]);
    }
    if (_Src != (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(_Src);
    }
  }
  ExceptionList = local_10;
  return;
}

