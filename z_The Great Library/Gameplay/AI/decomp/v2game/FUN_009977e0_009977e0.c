// FUN_009977e0 @ 009977e0 body=[[009977e0, 00997d00]]


void FUN_009977e0(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_EAX;
  int *piVar4;
  undefined4 *unaff_EBX;
  int iVar5;
  uint uVar6;
  int unaff_ESI;
  int iVar7;
  int unaff_EDI;
  int iVar8;
  int iVar9;
  int iStack_68;
  int *piStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int *piStack_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar5 = *(int *)(in_EAX + 0xa0) + *(int *)(in_EAX + 0x6bcf0);
  local_3c = *(int *)(in_EAX + 0x6b9c0);
  local_44 = iVar5 / 0x32;
  iVar7 = (int)((double)*(int *)(in_EAX + 0x6b9bc) * 0.0009765625 *
               (double)*(int *)(in_EAX + 0x6bc68));
  local_40 = *(int *)(in_EAX + 0x6b9bc) - iVar7;
  local_34 = *(undefined4 *)(in_EAX + 0x6b9bc);
  local_1c = local_3c - (int)(((float)local_3c / 768.0) * (float)*(int *)(in_EAX + 0x6bc6c));
  local_24 = local_1c -
             (int)(((double)*(int *)(in_EAX + 0x6b9c0) / 768.0) * (double)*(int *)(in_EAX + 0x6bc70)
                  );
  piStack_64 = *(int **)(in_EAX + 100);
  uStack_5c = 1;
  iStack_60 = 0xae;
  local_48 = 0;
  iStack_68 = 0x9978f6;
  local_38 = iVar5;
  local_28 = iVar7;
  local_20 = iVar7;
  (**(code **)(*piStack_64 + 0xe4))();
  iStack_68 = 0;
  (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),7);
  (**(code **)(**(int **)(in_EAX + 100) + 0x130))(*(int **)(in_EAX + 100),auStack_30);
  FUN_0099e260();
  while ((unaff_EBX < *(undefined4 **)(unaff_ESI + 4) && (piStack_4c != (int *)0x0))) {
    piVar4 = (int *)*piStack_4c;
    iStack_68 = iStack_68 + 1;
    if (((char)piVar4[0x15] == '\0') && (piVar4[0x14] == 0)) {
      pcVar1 = *(code **)(*piVar4 + 0x18);
      *(undefined1 *)(piVar4 + 0x15) = 1;
      (*pcVar1)();
      (**(code **)(*(int *)*unaff_EBX + 0x50))(in_EAX + 0x6bd48);
    }
    if ((*(char *)(in_EAX + 0x6bc64) != '\0') && (iStack_68 % (int)piStack_64 == 0)) {
      (**(code **)(**(int **)(in_EAX + 100) + 0xa4))(*(int **)(in_EAX + 100));
      iVar9 = 0;
      iVar8 = -0x1000000;
      (**(code **)(**(int **)(in_EAX + 100) + 0xac))
                (*(int **)(in_EAX + 100),0,0,7,0xff000000,DAT_00f092fc,0);
      FUN_00997d10(in_EAX,*(undefined4 *)(in_EAX + 0x6bc78));
      iStack_60 = (int)(((float)iVar8 / (float)iVar5) * (float)(iVar9 - iVar7) + (float)iVar7);
      (**(code **)(**(int **)(in_EAX + 100) + 300))(*(int **)(in_EAX + 100),&iStack_68);
      (**(code **)(**(int **)(in_EAX + 100) + 0xac))
                (*(int **)(in_EAX + 100),0,0,1,*(undefined4 *)(in_EAX + 0x6bc74),DAT_00f092fc,0);
      (**(code **)(**(int **)(in_EAX + 100) + 0xa8))(*(int **)(in_EAX + 100));
      (**(code **)(**(int **)(in_EAX + 100) + 0x44))(*(int **)(in_EAX + 100),0,0,0,0);
    }
    piStack_4c = (int *)piStack_4c[1];
    if (piStack_4c == (int *)0x0) {
      puVar2 = *(undefined4 **)(unaff_ESI + 4);
      unaff_EBX = (undefined4 *)((int)unaff_EBX + 1);
      if (unaff_EBX < puVar2) {
        piVar4 = (int *)(*(int *)(unaff_ESI + 8) + (int)unaff_EBX * 4);
        do {
          if (*piVar4 != 0) break;
          unaff_EBX = (undefined4 *)((int)unaff_EBX + 1);
          piVar4 = piVar4 + 1;
        } while (unaff_EBX < puVar2);
        if (unaff_EBX < puVar2) {
          piStack_4c = *(int **)(*(int *)(unaff_ESI + 8) + (int)unaff_EBX * 4);
        }
      }
    }
  }
  uVar6 = 0;
  if (*(uint *)(in_EAX + 0xa4) != 0) {
    piVar4 = *(int **)(in_EAX + 0xa8);
    uVar6 = 0;
    do {
      if (*piVar4 != 0) break;
      uVar6 = uVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar6 < *(uint *)(in_EAX + 0xa4));
  }
  do {
    piStack_4c = *(int **)(*(int *)(in_EAX + 0xa8) + uVar6 * 4);
    do {
      do {
        do {
          if ((*(uint *)(in_EAX + 0xa4) <= uVar6) || (piStack_4c == (int *)0x0)) {
            (**(code **)(**(int **)(in_EAX + 100) + 300))(*(int **)(in_EAX + 100),&local_38);
            (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),0xae,0);
            (**(code **)(**(int **)(in_EAX + 100) + 0xe4))(*(int **)(in_EAX + 100),7,1);
            if (*(char *)(in_EAX + 0x6bc64) != '\0') {
              *(undefined1 *)(in_EAX + 0x6bc64) = 0;
              FUN_009962f0(*(undefined4 *)(in_EAX + 0x6bc78));
              if (*(undefined4 **)(in_EAX + 0x6bc78) != (undefined4 *)0x0) {
                (**(code **)**(undefined4 **)(in_EAX + 0x6bc78))(1);
              }
              FUN_0099bd50(in_EAX);
            }
            return;
          }
          piVar4 = (int *)*piStack_4c;
          iStack_68 = iStack_68 + 1;
          if (((char)piVar4[0x15] == '\0') && (piVar4[0x14] == 0)) {
            pcVar1 = *(code **)(*piVar4 + 0x18);
            *(undefined1 *)(piVar4 + 0x15) = 1;
            (*pcVar1)();
          }
          if ((*(char *)(in_EAX + 0x6bc64) != '\0') && (iStack_68 % (int)piStack_64 == 0)) {
            local_40 = (int)(((float)iStack_68 / (float)unaff_EDI) * (float)(iStack_60 - iVar7) +
                            (float)iVar7);
            (**(code **)(**(int **)(in_EAX + 100) + 300))(*(int **)(in_EAX + 100),&local_48);
            (**(code **)(**(int **)(in_EAX + 100) + 0xa4))(*(int **)(in_EAX + 100));
            (**(code **)(**(int **)(in_EAX + 100) + 0xac))
                      (*(int **)(in_EAX + 100),0,0,1,*(undefined4 *)(in_EAX + 0x6bc74),DAT_00f092fc,
                       0);
            (**(code **)(**(int **)(in_EAX + 100) + 0xa8))(*(int **)(in_EAX + 100));
            (**(code **)(**(int **)(in_EAX + 100) + 0x44))(*(int **)(in_EAX + 100),0,0,0,0);
          }
          piStack_4c = (int *)piStack_4c[1];
        } while (piStack_4c != (int *)0x0);
        uVar3 = *(uint *)(in_EAX + 0xa4);
        uVar6 = uVar6 + 1;
      } while (uVar3 <= uVar6);
      piVar4 = (int *)(*(int *)(in_EAX + 0xa8) + uVar6 * 4);
      do {
        if (*piVar4 != 0) break;
        uVar6 = uVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar6 < uVar3);
    } while (uVar3 <= uVar6);
  } while( true );
}

