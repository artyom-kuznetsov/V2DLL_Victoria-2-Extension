// FUN_00a781c0 @ 00a781c0 body=[[00a781c0, 00a781fc] [00a78200, 00a7842a] [00a78436, 00a784dc] [00a784e0, 00a784f6] [00a78502, 00a7852c]]


void FUN_00a781c0(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  int in_ECX;
  int *piVar7;
  undefined1 local_5c [12];
  undefined4 local_50;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float fStack_18;
  float local_14;
  float local_c;
  float local_8;
  
  _memset(local_5c,0,0x34);
  if (*(int *)(in_ECX + 0x144) == 2) {
    piVar7 = (int *)**(int **)(in_ECX + 0x1b0);
    if (piVar7 != *(int **)(in_ECX + 0x1b0)) {
      do {
        FUN_00ab047b();
        iVar5 = FUN_00ab047b();
        local_8 = ((float)iVar5 / 32767.0 - 0.2) * 0.3 * 1.2;
        iVar5 = FUN_00ab047b();
        fStack_24 = ((float)iVar5 / 32767.0 - 0.5) * 0.3 * 1.2;
        local_28 = local_8;
        iVar5 = FUN_00ab047b();
        local_20 = ((float)iVar5 / 32767.0 - 0.5) * 0.3 * 1.2;
        iVar5 = FUN_00ab047b();
        local_c = ((float)iVar5 / 32767.0 - 0.5) * 0.4;
        iVar5 = FUN_00ab047b();
        fStack_18 = ((float)iVar5 / 32767.0 - 0.5) * 0.4;
        local_1c = local_c;
        iVar5 = FUN_00ab047b();
        puVar6 = (undefined8 *)(piVar7[3] * 0x34 + *(int *)(in_ECX + 400));
        local_14 = ((float)iVar5 / 32767.0 - 0.5) * 0.4;
        *puVar6 = CONCAT44(fStack_18,local_1c);
        puVar6[2] = CONCAT44(fStack_24,local_28);
        *(undefined8 *)((int)puVar6 + 0x1c) = local_40;
        uVar3 = DAT_00f17b54;
        *(float *)(puVar6 + 1) = local_14;
        *(undefined4 *)(puVar6 + 5) = uVar3;
        *(undefined4 *)((int)puVar6 + 0xc) = local_50;
        *(float *)(puVar6 + 3) = local_20;
        *(undefined4 *)((int)puVar6 + 0x24) = local_38;
        *(undefined4 *)((int)puVar6 + 0x2c) = local_30;
        *(undefined4 *)(puVar6 + 6) = local_2c;
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
          piVar2 = (int *)piVar7[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar7 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
            while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
              cVar1 = *(char *)(piVar7[1] + 0x11);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar7 != *(int **)(in_ECX + 0x1b0));
    }
    iVar5 = *(int *)(*(int *)(in_ECX + 0x1b0) + 4);
    if (*(char *)(iVar5 + 0x11) == '\0') {
      FUN_004a2e50(*(undefined4 *)(iVar5 + 8));
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar5);
    }
    *(int *)(*(int *)(in_ECX + 0x1b0) + 4) = *(int *)(in_ECX + 0x1b0);
    *(undefined4 *)*(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(in_ECX + 0x1b0);
    *(int *)(*(int *)(in_ECX + 0x1b0) + 8) = *(int *)(in_ECX + 0x1b0);
    *(undefined4 *)(in_ECX + 0x1b4) = 0;
  }
  if (*(int *)(in_ECX + 0x144) == 1) {
    piVar7 = (int *)**(int **)(in_ECX + 0x1b0);
    if (piVar7 != *(int **)(in_ECX + 0x1b0)) {
      do {
        FUN_00a77f00(in_ECX);
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
          piVar2 = (int *)piVar7[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar7 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar7 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar7[1] + 0x11);
            piVar4 = (int *)piVar7[1];
            piVar2 = piVar7;
            while ((piVar7 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))) {
              cVar1 = *(char *)(piVar7[1] + 0x11);
              piVar4 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar7 != *(int **)(in_ECX + 0x1b0));
    }
    iVar5 = *(int *)(*(int *)(in_ECX + 0x1b0) + 4);
    if (*(char *)(iVar5 + 0x11) == '\0') {
      FUN_004a2e50(*(undefined4 *)(iVar5 + 8));
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar5);
    }
    *(int *)(*(int *)(in_ECX + 0x1b0) + 4) = *(int *)(in_ECX + 0x1b0);
    *(undefined4 *)*(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(in_ECX + 0x1b0);
    *(int *)(*(int *)(in_ECX + 0x1b0) + 8) = *(int *)(in_ECX + 0x1b0);
    *(undefined4 *)(in_ECX + 0x1b4) = 0;
  }
  return;
}

