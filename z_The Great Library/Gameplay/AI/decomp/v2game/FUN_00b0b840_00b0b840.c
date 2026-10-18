// FUN_00b0b840 @ 00b0b840 body=[[00b0b840, 00b0b884]]


void FUN_00b0b840(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  in_ECX[2] = param_1;
  in_ECX[1] = param_2;
  uVar1 = (*(code *)PTR_FUN_00f01b08)(param_2 << 4,0xcd,4,0x65,0,0);
  in_ECX[3] = 0xc1200000;
  *in_ECX = uVar1;
  in_ECX[4] = 0x41200000;
  return;
}

