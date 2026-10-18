// FUN_00a53160 @ 00a53160 body=[[00a53160, 00a531e4] [00a531e8, 00a53249] [00a5324d, 00a5337f] [00a53383, 00a533b1] [00a533b5, 00a534dc] [00a534e0, 00a536a7] [00a536ab, 00a536bd]]


void FUN_00a53160(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  wchar_t *****pppppwVar4;
  FILE *_File;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_c8;
  int local_bc;
  int local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_9c;
  int local_90;
  int local_8c;
  uint local_88;
  int local_84;
  wchar_t ****local_80 [5];
  uint local_6c;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_46;
  uint local_40;
  uint local_3c [3];
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4883b;
  local_10 = ExceptionList;
  iVar7 = param_1 + 0x108;
  local_64 = *(int *)(param_1 + 0x178) - *(int *)(param_1 + 0x174) >> 2 & 0xffff;
  piVar6 = *(int **)(param_1 + 0x174);
  local_20 = *(int *)(*piVar6 + 0x28) - *(int *)(*piVar6 + 0x24) >> 1 & 0xffff;
  local_60 = (uint)*(ushort *)(*piVar6 + 0x34);
  local_18[0] = (undefined4 *)(*piVar6 + 0x24);
  ExceptionList = &local_10;
  iVar3 = FUN_009e74b0(iVar7);
  local_40 = (uint)*(ushort *)(iVar3 + 0x10);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_54 = (uint)*(ushort *)(param_1 + 0x170);
  local_50 = *(undefined4 *)(param_1 + 0x110);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e0b438,1);
  local_8 = 0;
  FUN_00988f20(local_3c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  pppppwVar4 = (wchar_t *****)local_80[0];
  if (local_6c < 0x10) {
    pppppwVar4 = local_80;
  }
  iVar3 = FID_conflict___access((wchar_t *)pppppwVar4,2);
  if (iVar3 == -1) {
    pppppwVar4 = (wchar_t *****)local_80[0];
    if (local_6c < 0x10) {
      pppppwVar4 = local_80;
    }
    FID_conflict___wchmod((char *)pppppwVar4,0x180);
  }
  pppppwVar4 = (wchar_t *****)local_80[0];
  if (local_6c < 0x10) {
    pppppwVar4 = local_80;
  }
  _File = _fopen((char *)pppppwVar4,"wb");
  local_48 = 0x42;
  local_4c = 0x41584450;
  local_46 = 0x40001;
  _fwrite(&local_4c,10,1,_File);
  _fwrite(&local_64,2,1,_File);
  _fwrite(&local_20,2,1,_File);
  _fwrite(&local_60,2,1,_File);
  _fwrite(&local_50,4,1,_File);
  _fwrite(&local_54,2,1,_File);
  _fwrite(&local_40,2,1,_File);
  local_1c = FUN_009e74b0(iVar7);
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar5 = (undefined4 *)FUN_009e74b0(iVar7);
  if (0xf < (uint)puVar5[5]) {
    puVar5 = (undefined4 *)*puVar5;
  }
  _fwrite(puVar5,1,*(int *)(local_1c + 0x10) + 1,_File);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c);
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c = local_9c & 0xffffff00;
  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c8);
  }
  _fwrite((void *)*local_18[0],2,local_20 & 0xffff,_File);
  local_5c = (uint)*(ushort *)(**(int **)(param_1 + 0x174) + 0x58);
  _fwrite(&local_5c,2,1,_File);
  if (**(int **)(param_1 + 0x174) != 0) {
    iVar7 = **(int **)(param_1 + 0x174);
    local_1c = iVar7 + 0x50;
    piVar6 = *(int **)(iVar7 + 0x54);
    piVar8 = (int *)*piVar6;
    if (piVar8 != piVar6) {
      do {
        local_18[0] = (undefined4 *)(uint)*(ushort *)(piVar8 + 7);
        _fwrite(local_18,2,1,_File);
        piVar6 = piVar8 + 3;
        if (0xf < (uint)piVar8[8]) {
          piVar6 = (int *)*piVar6;
        }
        _fwrite(piVar6,1,((uint)local_18[0] & 0xffff) + 1,_File);
        if (*(char *)((int)piVar8 + 0x69) == '\0') {
          piVar6 = (int *)piVar8[2];
          if (*(char *)((int)piVar6 + 0x69) == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x69);
            piVar8 = piVar6;
            piVar6 = (int *)*piVar6;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar6 + 0x69);
              piVar8 = piVar6;
              piVar6 = (int *)*piVar6;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x69);
            piVar2 = (int *)piVar8[1];
            piVar6 = piVar8;
            while ((piVar8 = piVar2, cVar1 == '\0' && (piVar6 == (int *)piVar8[2]))) {
              cVar1 = *(char *)(piVar8[1] + 0x69);
              piVar2 = (int *)piVar8[1];
              piVar6 = piVar8;
            }
          }
        }
      } while (piVar8 != *(int **)(local_1c + 4));
    }
  }
  iVar7 = *(int *)(param_1 + 0x174);
  local_18[0] = (undefined4 *)0x0;
  if (0 < (int)(*(int *)(param_1 + 0x178) - iVar7 & 0xfffffffcU)) {
    do {
      iVar7 = *(int *)(iVar7 + (int)local_18[0] * 4);
      local_58 = (uint)*(ushort *)(iVar7 + 0x58);
      _fwrite(&local_58,2,1,_File);
      piVar6 = (int *)**(int **)(iVar7 + 0x54);
      if (piVar6 != *(int **)(iVar7 + 0x54)) {
        do {
          local_ac = piVar6[10];
          local_a8 = piVar6[0xe];
          local_a4 = piVar6[0x12];
          local_a0 = piVar6[0x16];
          _fwrite(&local_ac,4,4,_File);
          local_bc = piVar6[0xb];
          local_b8 = piVar6[0xf];
          local_b4 = piVar6[0x13];
          local_b0 = piVar6[0x17];
          _fwrite(&local_bc,4,4,_File);
          local_30 = piVar6[0xc];
          local_2c = piVar6[0x10];
          local_28 = piVar6[0x14];
          local_24 = piVar6[0x18];
          _fwrite(&local_30,4,4,_File);
          local_90 = piVar6[0xd];
          local_8c = piVar6[0x11];
          local_88 = piVar6[0x15];
          local_84 = piVar6[0x19];
          _fwrite(&local_90,4,4,_File);
          if (*(char *)((int)piVar6 + 0x69) == '\0') {
            piVar8 = (int *)piVar6[2];
            if (*(char *)((int)piVar8 + 0x69) == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x69);
              piVar6 = piVar8;
              piVar8 = (int *)*piVar8;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar8 + 0x69);
                piVar6 = piVar8;
                piVar8 = (int *)*piVar8;
              }
            }
            else {
              cVar1 = *(char *)(piVar6[1] + 0x69);
              piVar2 = (int *)piVar6[1];
              piVar8 = piVar6;
              while ((piVar6 = piVar2, cVar1 == '\0' && (piVar8 == (int *)piVar6[2]))) {
                cVar1 = *(char *)(piVar6[1] + 0x69);
                piVar2 = (int *)piVar6[1];
                piVar8 = piVar6;
              }
            }
          }
        } while (piVar6 != *(int **)(iVar7 + 0x54));
      }
      puVar5 = local_18[0];
      iVar7 = *(int *)(*(int *)(param_1 + 0x174) + (int)local_18[0] * 4);
      local_1c = *(int *)(iVar7 + 0x40) - *(int *)(iVar7 + 0x3c) >> 2 & 0xffff;
      _fwrite(&local_1c,2,1,_File);
      _fwrite(*(void **)(iVar7 + 0x3c),4,local_1c & 0xffff,_File);
      iVar7 = *(int *)(param_1 + 0x174);
      local_18[0] = (undefined4 *)((int)puVar5 + 1);
    } while ((int)local_18[0] < *(int *)(param_1 + 0x178) - iVar7 >> 2);
  }
  _fclose(_File);
  if (local_6c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_80[0]);
}

