// FUN_005ccec0 @ 005ccec0 body=[[005ccec0, 005cd2e8]]


void FUN_005ccec0(int param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 uVar5;
  undefined1 auStack_50 [28];
  undefined1 auStack_34 [28];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b512c4;
  local_14 = ExceptionList;
  uVar5 = 0;
  if ((((in_ECX[0x42] != 0) && (0 < in_ECX[0x10])) && ((char)in_ECX[0x41] == '\0')) &&
     (in_ECX[0x17] == 0)) {
    ExceptionList = &local_14;
    if (((*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) != '\0') &&
        (ExceptionList = &local_14, cVar2 = (**(code **)(*in_ECX + 0x38))(), cVar2 != '\0')) &&
       ((in_ECX[0x6d] != 0 &&
        ((iVar3 = *(int *)(in_ECX[0x6d] + 0xdc), *(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) != '\0' &&
         (iVar3 == in_ECX[0x37])))))) {
      if (param_1 != in_ECX[0x37]) {
        ExceptionList = local_14;
        return;
      }
      iVar3 = FUN_00aae9af(100);
      uStack_c = 0;
      if (iVar3 != 0) {
        uVar5 = FUN_005e33e0(iVar3,in_ECX);
      }
      uStack_c = 0xffffffff;
      iVar3 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
      ExceptionList = pvStack_18;
      return;
    }
    if ((param_1 == in_ECX[0x37]) && ((param_2 == '\0' || (in_ECX[0x3b] < 1)))) {
      iVar3 = FUN_00aae9af(0x68);
      uStack_c = 1;
      if (iVar3 != 0) {
        uVar5 = FUN_005df690(iVar3,in_ECX,1);
      }
      uStack_c = 0xffffffff;
      iVar3 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
      (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
      cVar2 = (**(code **)(*in_ECX + 0x38))();
      if (((cVar2 != '\0') && (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) == '\0')) &&
         (piVar4 = *(int **)(in_ECX[0x37] + 0xec), piVar4 != (int *)0x0)) {
        do {
          piVar1 = (int *)*piVar4;
          piVar4 = (int *)piVar4[2];
          cVar2 = (**(code **)(*piVar1 + 0x3c))();
          if ((cVar2 != '\0') && (piVar1[0x33] == in_ECX[0x33])) {
            (**(code **)(*piVar1 + 0x30))();
            cVar2 = FUN_005d77a0();
            if (cVar2 != '\0') {
              uVar5 = (**(code **)(*piVar1 + 0x30))();
              iVar3 = FUN_00aae9af(0x8c);
              uStack_c = 2;
              if (iVar3 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_005e4480(iVar3,in_ECX,uVar5);
              }
              uStack_c = 0xffffffff;
              iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
              (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
              ExceptionList = pvStack_18;
              return;
            }
          }
        } while (piVar4 != (int *)0x0);
        ExceptionList = local_14;
        return;
      }
    }
    else {
      cVar2 = (**(code **)(*in_ECX + 0x88))(param_1);
      if (cVar2 == '\0') {
        if ((char)in_ECX[1] != '\0') {
          FUN_009885d0();
          uStack_c = 7;
          FUN_005ccc00(in_ECX,param_1,auStack_50);
          uStack_c = 0xffffffff;
          FUN_00408ad0();
        }
        if (*(int *)(DAT_012588e8 + 0xb60) != in_ECX[0x31]) {
          ExceptionList = local_14;
          return;
        }
        FUN_009885d0();
        uStack_c = 8;
        piVar4 = (int *)FUN_009c7290();
        (**(code **)(*piVar4 + 0x60))(auStack_34);
      }
      else {
        if ((char)in_ECX[1] != '\0') {
          FUN_009885d0();
          uStack_c = 3;
          FUN_005ccc00(in_ECX,param_1,auStack_50);
          uStack_c = 0xffffffff;
          FUN_00408ad0();
        }
        iVar3 = FUN_00aae9af(0x90);
        uStack_c = 4;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_005de7d0(iVar3,in_ECX,*(undefined4 *)(param_1 + 0x58),param_2 == '\0',0,0,1);
        }
        uStack_c = 0xffffffff;
        iVar3 = (**(code **)(*(int *)in_ECX[0x42] + 0x44))();
        (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar5);
        if (*(int *)(DAT_012588e8 + 0xb60) != in_ECX[0x31]) {
          ExceptionList = local_14;
          return;
        }
        if ((in_ECX[0x10] < 1) || (*(int *)in_ECX[0xe] == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)in_ECX[0xe] + 0x38);
        }
        if (*(int *)(iVar3 + 0x21c) != 0) {
          piVar4 = (int *)FUN_009c7290();
          (**(code **)(*piVar4 + 0x60))(iVar3 + 0x20c);
          ExceptionList = pvStack_18;
          return;
        }
        cVar2 = (**(code **)(*in_ECX + 0x38))();
        if (cVar2 == '\0') {
          FUN_009885d0();
          uStack_c = 6;
        }
        else {
          FUN_009885d0();
          uStack_c = 5;
        }
        piVar4 = (int *)FUN_009c7290();
        (**(code **)(*piVar4 + 0x60))(auStack_50);
      }
      FUN_00408ad0();
    }
  }
  ExceptionList = local_14;
  return;
}

