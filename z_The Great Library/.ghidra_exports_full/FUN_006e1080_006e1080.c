// FUN_006e1080 @ 006e1080 body=[[006e1080, 006e10ed]]


void FUN_006e1080(undefined4 param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  undefined4 *unaff_EDI;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  if (8 < (int)(in_EAX - (int)unaff_EDI & 0xfffffff8U)) {
    puVar1 = (undefined4 *)(in_EAX + -4);
    local_c = 4 - (int)unaff_EDI;
    do {
      local_14 = puVar1[-1];
      local_10 = *puVar1;
      puVar1[-1] = *unaff_EDI;
      *puVar1 = unaff_EDI[1];
      FUN_006e18c0(0,(-4 - (int)unaff_EDI) + (int)puVar1 >> 3,&local_14,param_1);
      puVar1 = puVar1 + -2;
    } while (8 < (int)(local_c + (int)puVar1 & 0xfffffff8U));
  }
  return;
}

