// FUN_00988120 @ 00988120 body=[[00988120, 00988162]]


void FUN_00988120(void)

{
  _Ctypevec *p_Var1;
  _Cvtvec *p_Var2;
  undefined4 extraout_EDX;
  undefined4 *unaff_ESI;
  _Cvtvec *in_stack_ffffffec;
  
  unaff_ESI[1] = 0;
  *unaff_ESI = &PTR_FUN_00e378b4;
  p_Var1 = __Getctype((_Ctypevec *)&stack0xffffffec);
  *(undefined8 *)(unaff_ESI + 2) = *(undefined8 *)p_Var1;
  *(undefined8 *)(unaff_ESI + 4) = *(undefined8 *)&p_Var1->_Delfl;
  p_Var2 = __Getcvt(in_stack_ffffffec);
  unaff_ESI[6] = p_Var2;
  unaff_ESI[7] = extraout_EDX;
  return;
}

