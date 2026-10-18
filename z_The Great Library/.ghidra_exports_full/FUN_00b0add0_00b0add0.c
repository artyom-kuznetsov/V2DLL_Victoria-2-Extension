// FUN_00b0add0 @ 00b0add0 body=[[00b0add0, 00b0af88]]


void FUN_00b0add0(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *in_ECX;
  undefined1 *puVar8;
  uint uVar9;
  uint local_2c;
  undefined1 *local_24 [3];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b3929e;
  local_c = ExceptionList;
  uVar4 = DAT_00ef259c ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar1 = in_ECX[1];
  local_2c = 0;
  if (uVar1 != 0) {
    do {
      iVar2 = *(int *)(*in_ECX + local_2c * 4);
      if ((*(int *)(iVar2 + 0xc) == 0) && (*(char *)(iVar2 + 0x14) == '\0')) {
        FUN_00b0aae0(local_24,iVar2);
        local_4 = 0;
        FUN_00b14e30(local_18);
        local_4 = CONCAT31(local_4._1_3_,1);
        cVar3 = FUN_00b147b0(&DAT_00ddfe90);
        if (cVar3 == '\0') {
          cVar3 = FUN_00b147b0(&DAT_00ddfe8c);
          if (cVar3 != '\0') {
            puVar5 = local_24[0];
            if (local_24[0] == (undefined1 *)0x0) {
              puVar5 = &DAT_00ded94d;
            }
            iVar6 = FUN_00adc690(puVar5,0);
            goto LAB_00b0ae7d;
          }
          iVar6 = *(int *)(iVar2 + 0x10);
          if (iVar6 == -1) {
            iVar6 = 0;
          }
          puVar7 = (undefined4 *)FUN_00b15770(iVar6);
          puVar5 = (undefined1 *)*puVar7;
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_00ded94d;
          }
          puVar8 = local_24[0];
          if (local_24[0] == (undefined1 *)0x0) {
            puVar8 = &DAT_00ded94d;
          }
          FUN_00b15da0("MotionSet - Loading motion \'%s\' (id=%s) failed as the file extension isn\'t known."
                       ,puVar8,puVar5);
          *(undefined1 *)(iVar2 + 0x14) = 1;
          iVar6 = 0;
        }
        else {
          puVar5 = local_24[0];
          if (local_24[0] == (undefined1 *)0x0) {
            puVar5 = &DAT_00ded94d;
          }
          iVar6 = FUN_00adc4b0(puVar5,0);
LAB_00b0ae7d:
          if (iVar6 == 0) {
            *(undefined1 *)(iVar2 + 0x14) = 1;
          }
          else {
            puVar5 = local_24[0];
            if (local_24[0] == (undefined1 *)0x0) {
              puVar5 = &DAT_00ded94d;
            }
            FUN_00b072b0(puVar5);
          }
        }
        *(int *)(iVar2 + 0xc) = iVar6;
        local_4 = local_4 & 0xffffff00;
        FUN_00b13650();
        local_4 = 0xffffffff;
        FUN_00b13650();
      }
      local_2c = local_2c + 1;
    } while (local_2c < uVar1);
  }
  uVar1 = in_ECX[5];
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      FUN_00b0add0(uVar4);
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  ExceptionList = local_c;
  return;
}

