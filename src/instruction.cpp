/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y análisis de algoritmos
 *
 * author: Juan García Santos alu0101325583@ull.edu.es
 * date: 05/03/2022
 * description: definition a class that represents individual instructions
 *
 */
#ifndef INSTRUCTION_CPP
#define INSTRUCTION_CPP

#include "include/instruction.h"

using namespace std;

Instruction::Instruction() {
  opcode = "ADD";
  mode = NULL_VALUE;
  op = "0";
  type = "MATH";
}

Instruction::Instruction(string opcode_, string mode_, string op_, string type_) {
  opcode = opcode_;
  mode = mode_;
  op = op_;
  type = type_;
}

Instruction::~Instruction() {
  opcode = NULL_VALUE;
  mode = NULL_VALUE;
  op = NULL_VALUE;
}

string Instruction::getOpcode() {
  return opcode;
}

string Instruction::getMode() {
  return mode;
}

string Instruction::getOp() {
  return op;
}

string Instruction::getType() {
  return type;
}


string Instruction::getOpcode() const{
  return opcode;
}

string Instruction::getMode() const{
  return mode;
}

string Instruction::getOp() const{
  return op;
}

string Instruction::getType() const{
  return type;
}

void Instruction::modify(Instruction new_instruction) {
  opcode = new_instruction.getOpcode();
  mode = new_instruction.getMode();
  op = new_instruction.getOp();
}

ostream& operator<<(ostream& os, const Instruction& ins) {
  os << ins.getOpcode() << ins.getMode() << ins.getOp()<< endl;
  return os;
}

#endif