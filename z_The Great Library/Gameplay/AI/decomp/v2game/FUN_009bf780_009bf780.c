// FUN_009bf780 @ 009bf780 body=[[009bf780, 009bfe93]]


void FUN_009bf780(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  int *in_ECX;
  int iVar8;
  int unaff_ESI;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  float10 fVar12;
  float fVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iStack_1dc;
  int *piStack_1d8;
  uint *puStack_1d4;
  int iStack_1cc;
  int *local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  undefined4 local_1b4;
  undefined8 uStack_1b0;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [12];
  float fStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined1 auStack_160 [24];
  int aiStack_148 [9];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [76];
  undefined4 auStack_c8 [16];
  undefined4 auStack_88 [10];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [68];
  
  local_1b8 = *(int *)(in_ECX[0x4f] + 0x6bc88);
  if (local_1b8 != 0) {
    uStack_190 = CONCAT44(*(undefined4 *)(in_ECX[0x4f] + 100),(undefined4)uStack_190);
    local_1b4 = 0;
    piVar3 = (int *)(**(code **)(*in_ECX + 0x44))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x38))();
    if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffffcU)) {
      local_1b4 = *(undefined4 *)*piVar3;
    }
    uStack_1b0 = (ulonglong)(uint)uStack_1b0;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar12 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    fStack_194 = (float)fVar12;
    piVar3 = in_ECX + 0x25;
    piVar9 = aiStack_148;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar9 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar9 = piVar9 + 1;
    }
    piVar3 = (int *)(local_1b8 + 0x1c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)(local_1b8 + 0x1c) + 0x16c))();
    puVar10 = auStack_c8;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x174))();
    puVar10 = auStack_88;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar15 = auStack_48;
    D3DXMatrixMultiply(puVar15,auStack_c8,auStack_88);
    uVar1 = *(undefined8 *)(*(int *)(in_ECX[0x4f] + 0x6bc88) + 0x114);
    uStack_1a8 = *(uint *)(*(int *)(in_ECX[0x4f] + 0x6bc88) + 0x11c);
    uStack_1b0._0_4_ = (uint)uVar1;
    fStack_194 = (float)(uint)uStack_1b0;
    uStack_1b0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_190 = CONCAT44(uStack_1a8,uStack_1b0._4_4_);
    uStack_188 = uStack_1a4;
    uStack_1b0 = uVar1;
    if (*(char *)(in_ECX[0x50] + 0x161) != '\0') {
      fVar13 = (float)in_ECX[0x56];
      if (fVar13 <= 0.0) {
        fVar13 = *(float *)(in_ECX[0x50] + 0x11c);
      }
      D3DXMatrixScaling(auStack_114,fVar13,fVar13,fVar13);
      D3DXMatrixMultiply(&uStack_164,auStack_124,&uStack_164);
    }
    uVar5 = in_ECX[0x50];
    piStack_1d8 = (int *)0x0;
    if (0 < (int)(*(int *)(uVar5 + 0x110) - *(int *)(uVar5 + 0x10c) & 0xfffffffcU)) {
      do {
        puVar11 = puStack_1d4;
        puVar4 = *(undefined4 **)(*(int *)(uVar5 + 0x10c) + (int)piStack_1d8 * 4);
        if (puVar4[0x20] == 0) {
          iVar8 = *(int *)(uVar5 + 0x94);
        }
        else {
          iVar8 = *(int *)(uVar5 + 0x98);
        }
        if (local_1b8 != iVar8) {
          local_1b8 = iVar8;
          (**(code **)(**(int **)(puStack_1d4[0x4f] + 100) + 0x15c))
                    (*(int **)(puStack_1d4[0x4f] + 100),iVar8);
        }
        if (puVar4[10] == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = *(int **)(*(int *)(puStack_1d4[0x4f] + 0x6bd00) + -4 + puVar4[10] * 4);
        }
        if (puVar4[0x12] != 0) {
          (**(code **)(*piVar3 + 0xe8))(piVar3,puVar4[0x12]);
        }
        (**(code **)(*(int *)puStack_1d4[0x4f] + 0xc))(piVar3,iStack_1c4 + 0x1c,iStack_1c4);
        if (puVar4[0x13] != 0) {
          (**(code **)(*piVar3 + 0x98))(piVar3,puVar4[0x13],auStack_60);
        }
        if (puVar4[0x14] != 0) {
          (**(code **)(*piVar3 + 0x88))(piVar3,puVar4[0x14],auStack_1a0);
        }
        if (puVar4[0x15] != 0) {
          (**(code **)(*piVar3 + 0x88))(piVar3,puVar4[0x15],auStack_1a0);
        }
        puStack_1d4 = puVar4 + 2;
        local_1c8 = puVar4 + 0x23;
        puVar16 = (uint *)0x0;
        iStack_1c0 = 0;
        piVar9 = (int *)(iStack_1dc * 4);
        do {
          piStack_1d8 = piVar9;
          if ((iStack_1c0 + iStack_1dc < (int)(puVar11[99] - puVar11[0x62]) >> 2) &&
             (*(int *)((int)piStack_1d8 + puVar11[0x62]) != 0)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          uStack_1a8 = *puStack_1d4;
          if ((uStack_1a8 != 0) || (bVar7)) {
            iVar8 = *local_1c8;
            puVar16 = (uint *)((int)puVar16 + 1);
            local_1c8 = local_1c8 + 1;
            if (iVar8 != 0) {
              uVar5 = uStack_1a8;
              if (bVar7) {
                uVar5 = *(uint *)((int)piStack_1d8 + puVar11[0x62]);
              }
              if ((uVar5 == 0xffffffff) || (9999 < uVar5)) {
                uVar6 = 0;
              }
              else {
                uVar6 = *(undefined4 *)(uVar5 * 0x2c + 0x15c + puVar11[0x4f]);
              }
              (**(code **)(*piVar3 + 0xd0))(piVar3,iVar8,uVar6);
            }
          }
          puStack_1d4 = puStack_1d4 + 1;
          piVar9 = piStack_1d8 + 1;
          iStack_1c0 = iStack_1c0 + 1;
        } while (iStack_1c0 < 4);
        iStack_1dc = iStack_1dc + (int)puVar16;
        if ((iStack_1cc != 0) && (puVar4[0x18] != 0)) {
          uStack_1bc = *(undefined4 *)(iStack_1cc + 0x138);
          local_1b8 = *(int *)(iStack_1cc + 0x13c);
          local_1b4 = *(undefined4 *)(iStack_1cc + 0x140);
          (**(code **)(*piVar3 + 0x50))(piVar3,puVar4[0x18],&uStack_1bc,0xc);
        }
        if (*(char *)(puVar11[0x50] + 0x161) == '\0') {
          if (puVar4[0x17] != 0) {
            (**(code **)(*piVar3 + 0xa0))
                      (piVar3,puVar4[0x17],*(undefined4 *)(puVar11[0x52] + unaff_ESI * 4),
                       (int)(puVar4[7] - puVar4[6]) >> 2);
          }
        }
        else {
          (**(code **)(*piVar3 + 0x98))(piVar3,puVar4[0x16],auStack_160);
        }
        if ((0 < (int)(puVar11[0x58] - puVar11[0x57]) / 0x1c) && (puVar4[0x19] != 0)) {
          uVar5 = puVar11[0x57];
          uStack_180 = *(undefined8 *)(uVar5 + 8);
          uStack_178 = *(undefined4 *)(uVar5 + 0x10);
          uStack_174 = *(undefined4 *)(uVar5 + 0x14);
          (**(code **)(*piVar3 + 0x88))(piVar3,puVar4[0x19],&uStack_180);
        }
        if ((1 < (int)(puVar11[0x58] - puVar11[0x57]) / 0x1c) && (puVar4[0x1a] != 0)) {
          uVar5 = puVar11[0x57];
          uStack_170 = *(undefined8 *)(uVar5 + 0x24);
          uStack_168 = *(undefined4 *)(uVar5 + 0x2c);
          uStack_164 = *(undefined4 *)(uVar5 + 0x30);
          (**(code **)(*piVar3 + 0x88))(piVar3,puVar4[0x1a],&uStack_170);
        }
        if ((2 < (int)(puVar11[0x58] - puVar11[0x57]) / 0x1c) && (puVar4[0x1b] != 0)) {
          uVar5 = puVar11[0x57];
          uStack_190 = *(undefined8 *)(uVar5 + 0x40);
          uStack_188 = *(undefined4 *)(uVar5 + 0x48);
          uStack_184 = *(undefined4 *)(uVar5 + 0x4c);
          (**(code **)(*piVar3 + 0x88))(piVar3,puVar4[0x1b],&uStack_190);
        }
        if (((char)puVar11[0x5b] != '\0') && (puVar4[0x1c] != 0)) {
          (**(code **)(*piVar3 + 0x88))(piVar3,puVar4[0x1c],puVar11 + 0x5c);
        }
        if (puVar4[0x1d] != 0) {
          (**(code **)(*piVar3 + 0x78))(piVar3,puVar4[0x1d],(float)puVar11[0x61] * uStack_1b0._4_4_)
          ;
        }
        if (puVar4[0x1e] != 0) {
          (**(code **)(*piVar3 + 0x78))(piVar3,puVar4[0x1e],puVar11[0x66]);
        }
        (**(code **)(*piVar3 + 0xfc))(piVar3,&stack0xfffffe18,0);
        puVar14 = (undefined1 *)0x0;
        if (puVar15 != (undefined1 *)0x0) {
          do {
            (**(code **)(*piVar3 + 0x100))(piVar3,puVar14);
            piVar2 = *(int **)(puVar11[0x4f] + 100);
            (**(code **)(*piVar2 + 0x1a0))(piVar2,puVar4[1]);
            (**(code **)(*piVar2 + 400))
                      (piVar2,0,*puVar4,0,(-(*(char *)(puVar4 + 0x27) != '\0') & 0x20U) + 0x30);
            puVar11 = puVar16;
            if (puVar4[0x20] != 0) {
              (**(code **)(*piVar2 + 400))(piVar2,1,puVar4[0x20],0,8);
              puVar11 = puVar16;
            }
            (**(code **)(*piVar3 + 0x104))(piVar3);
            (**(code **)(*piVar9 + 0x148))(piVar9,4,0,0,puVar4[0x21],0,puVar4[0x22]);
            (**(code **)(*piVar3 + 0x108))(piVar3);
            puVar14 = puVar14 + 1;
            puVar16 = puVar11;
          } while (puVar14 < puVar15);
        }
        (**(code **)(*piVar3 + 0x10c))(piVar3);
        uVar5 = puVar11[0x50];
        piStack_1d8 = (int *)((int)piStack_1d8 + 5);
      } while ((int)piStack_1d8 < *(int *)(uVar5 + 0x110) - *(int *)(uVar5 + 0x10c) >> 2);
    }
  }
  return;
}

