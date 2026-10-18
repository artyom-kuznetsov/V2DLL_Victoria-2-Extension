// FUN_00805560 @ 00805560 body=[[00805560, 00805b32]]


void FUN_00805560(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int in_ECX;
  undefined4 uVar3;
  
  FUN_00805b40();
  if (*param_2 < 1) {
    return;
  }
  if (*(int *)(*(int *)(in_ECX + 0x40) + 0x2abc) + -1 <= *param_2) {
    return;
  }
  if (param_2[1] < 1) {
    return;
  }
  if (*(int *)(*(int *)(in_ECX + 0x40) + 0x2ac0) + -1 <= param_2[1]) {
    return;
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 != '\0')) {
    FUN_007ebc50(3,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 != '\0')) {
    FUN_007ebc50(4,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 != '\0')) {
    FUN_007ebc50(1,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 != '\0')) {
    FUN_007ebc50(2,param_3);
    FUN_00805520();
  }
  bVar1 = false;
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 == '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 == '\0')) {
    bVar1 = true;
    FUN_007ebc50(0xf,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 == '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 == '\0')) {
    bVar1 = true;
    FUN_007ebc50(0xe,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 == '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 == '\0')) {
    bVar1 = true;
    FUN_007ebc50(0xd,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 == '\0')) &&
     (cVar2 = FUN_00494c90(), cVar2 == '\0')) {
    uVar3 = 0xc;
    goto LAB_00805b0e;
  }
  if (bVar1) {
    return;
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 == '\0') || (cVar2 = FUN_00494c90(), cVar2 == '\0')) ||
     ((cVar2 = FUN_00494c90(), cVar2 == '\0' ||
      ((cVar2 = FUN_00494c90(), cVar2 != '\0' || (cVar2 = FUN_00494c90(), cVar2 == '\0')))))) {
    cVar2 = FUN_00494c90();
    if ((cVar2 != '\0') &&
       ((((cVar2 = FUN_00494c90(), cVar2 != '\0' && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
         (cVar2 = FUN_00494c90(), cVar2 == '\0')) && (cVar2 = FUN_00494c90(), cVar2 != '\0')))) {
      uVar3 = 7;
      goto LAB_008059ca;
    }
    cVar2 = FUN_00494c90();
    if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
       (cVar2 = FUN_00494c90(), cVar2 == '\0')) {
      uVar3 = 6;
      goto LAB_008059ca;
    }
    cVar2 = FUN_00494c90();
    if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
       (cVar2 = FUN_00494c90(), cVar2 == '\0')) {
      uVar3 = 5;
      goto LAB_008059ca;
    }
  }
  else {
    uVar3 = 8;
LAB_008059ca:
    FUN_007ebc50(uVar3,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if ((((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
      (cVar2 = FUN_00494c90(), cVar2 == '\0')) && (cVar2 = FUN_00494c90(), cVar2 != '\0')) {
    FUN_007ebc50(9,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (((cVar2 != '\0') && (cVar2 = FUN_00494c90(), cVar2 != '\0')) &&
     ((cVar2 = FUN_00494c90(), cVar2 == '\0' && (cVar2 = FUN_00494c90(), cVar2 != '\0')))) {
    FUN_007ebc50(10,param_3);
    FUN_00805520();
  }
  cVar2 = FUN_00494c90();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FUN_00494c90();
  if (cVar2 == '\0') {
    return;
  }
  cVar2 = FUN_00494c90();
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = FUN_00494c90();
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = 0xb;
LAB_00805b0e:
  FUN_007ebc50(uVar3,param_3);
  FUN_00805520();
  return;
}

