// FUN_009d9980 @ 009d9980 body=[[009d9980, 009d9a7f] [009d9a83, 009d9c9c] [009d9ca0, 009d9ce0]]


uint FUN_009d9980(int *param_1,void *param_2,int param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint unaff_EBX;
  void *pvVar4;
  undefined4 unaff_EDI;
  void *_Dst;
  byte bVar5;
  char cStack_144;
  byte bStack_143;
  byte bStack_142;
  byte bStack_141;
  int iStack_140;
  uint local_13c;
  uint auStack_138 [4];
  undefined4 uStack_128;
  uint uStack_124;
  short sStack_11c;
  undefined1 local_114 [2];
  undefined4 uStack_112;
  undefined1 auStack_10c [4];
  int iStack_108;
  int iStack_104;
  short sStack_fe;
  uint uStack_fc;
  int iStack_f8;
  undefined4 uStack_ec;
  undefined **appuStack_68 [19];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b56c86;
  pvStack_14 = ExceptionList;
  local_13c = local_13c & 0xffffff00;
  ExceptionList = &pvStack_14;
  uVar1 = (**(code **)(*param_1 + 0xc))(local_114,0xe);
  if ((char)uVar1 != '\0') {
    if (sStack_11c == 0x4d42) {
      uVar1 = (**(code **)(*param_1 + 0xc))(auStack_10c,0x28);
      if ((char)uVar1 != '\0') {
        if (uStack_fc == 1) {
          cStack_144 = '\x01';
        }
        else {
          uVar1 = uStack_fc;
          if (uStack_fc != 0) goto LAB_009d9a83;
        }
        if (sStack_fe == 1) {
          *(undefined4 *)(in_ECX + 0xc) = 1;
          *(undefined4 *)(in_ECX + 0x10) = 1;
        }
        else if (sStack_fe == 8) {
          *(undefined4 *)(in_ECX + 0xc) = 1;
          *(undefined4 *)(in_ECX + 0x10) = 8;
        }
        else if (sStack_fe == 0x10) {
          *(undefined4 *)(in_ECX + 0xc) = 2;
          *(undefined4 *)(in_ECX + 0x10) = 0x10;
        }
        else if (sStack_fe == 0x18) {
          *(undefined4 *)(in_ECX + 0xc) = 3;
          *(undefined4 *)(in_ECX + 0x10) = 0x18;
        }
        uVar1 = *(int *)(in_ECX + 0xc) * iStack_108 + 3;
        *(int *)(in_ECX + 4) = iStack_108;
        *(int *)(in_ECX + 8) = iStack_104;
        *(uint *)(in_ECX + 0x1c) = uVar1 & 0xfffffffc;
        if (sStack_fe == 1) {
          *(int *)(in_ECX + 0x1c) = (int)uVar1 >> 3;
        }
        if (param_3 == -1) {
          if (*(int *)(in_ECX + 0x18) < 1) {
            *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(in_ECX + 0x1c);
          }
          param_3 = *(int *)(in_ECX + 0x18);
        }
        else {
          *(int *)(in_ECX + 0x18) = param_3;
        }
        *(undefined4 *)(in_ECX + 0x14) = uStack_ec;
        if (iStack_f8 == 0) {
          iStack_f8 = *(int *)(in_ECX + 0x1c) * iStack_104;
        }
        if (cStack_144 != '\0') {
          uStack_fc = 0;
        }
        if (sStack_fe != 0x18) {
          (**(code **)(*param_1 + 0x28))(uStack_112);
        }
        iVar3 = *(int *)(in_ECX + 8);
        pvVar4 = (void *)((iVar3 + -1) * param_3 + (int)param_2);
        _Dst = pvVar4;
        if (cStack_144 == '\0') {
          if (param_4 == '\0') {
            iStack_140 = -param_3;
          }
          else {
            iStack_140 = param_3;
            pvVar4 = param_2;
          }
          local_13c = 0;
          if (0 < iVar3) {
            do {
              (**(code **)(*param_1 + 0xc))(pvVar4,*(undefined4 *)(in_ECX + 0x1c));
              pvVar4 = (void *)((int)pvVar4 + iStack_140);
              iVar3 = local_13c + 1;
              local_13c = iVar3;
            } while (iVar3 < *(int *)(in_ECX + 8));
          }
        }
        else {
          while( true ) {
            while( true ) {
              while( true ) {
                (**(code **)(*param_1 + 0xc))(&stack0xfffffebb,1);
                bVar5 = (byte)(unaff_EBX >> 0x18);
                if ((char)((uint)unaff_EDI >> 0x18) == '\0') break;
                (**(code **)(*param_1 + 0xc))(&stack0xfffffeb5,1);
                _memset(_Dst,(uint)bStack_143,(uint)bVar5);
                _Dst = (void *)((int)_Dst + (uint)bVar5);
              }
              (**(code **)(*param_1 + 0xc))(&stack0xfffffeb3,1);
              if (bVar5 != 0) break;
              pvVar4 = (void *)((int)pvVar4 - param_3);
              _Dst = pvVar4;
            }
            iVar3 = 0;
            if (bVar5 == 1) break;
            if (bVar5 == 2) {
              (**(code **)(*param_1 + 0xc))(&bStack_141,1);
              (**(code **)(*param_1 + 0xc))(&stack0xfffffeb6,1);
              pvVar4 = (void *)((int)pvVar4 - (uint)bStack_142 * param_3);
              _Dst = (void *)((int)_Dst + ((uint)bStack_141 - (uint)bStack_142 * param_3));
            }
            else {
              (**(code **)(*param_1 + 0xc))(_Dst,bVar5);
              _Dst = (void *)((int)_Dst + (uint)bVar5);
              if ((unaff_EBX & 0x1000000) != 0) {
                (**(code **)(*param_1 + 0xc))(&stack0xfffffebb,1);
              }
            }
          }
        }
        ExceptionList = pvStack_1c;
        return CONCAT31((int3)((uint)iVar3 >> 8),1);
      }
    }
    else {
      uStack_124 = 0xf;
      uStack_128 = 0;
      auStack_138[0] = auStack_138[0] & 0xffffff00;
      FUN_00409350("bitmap.cpp",10);
      pvStack_14 = (void *)0x0;
      uVar2 = FUN_004015b0(auStack_138,0xad,0x101);
      pvStack_14._0_1_ = 1;
      FUN_00987d50(uVar2,"Attempting to load an illegal bitmap-type with a corrupt header.",0x40,0);
      FUN_00401280(uVar2);
      pvStack_14 = (void *)((uint)pvStack_14._1_3_ << 8);
      FUN_00987ac0(appuStack_68);
      appuStack_68[0] = std::ios_base::vftable;
      uVar1 = FUN_00aad52d(appuStack_68);
      if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_138[0]);
      }
    }
  }
LAB_009d9a83:
  ExceptionList = pvStack_1c;
  return uVar1 & 0xffffff00;
}

