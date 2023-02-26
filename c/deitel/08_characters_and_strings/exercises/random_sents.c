#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


const int N = 26;
const int N_DETS = 10;
const int N_PREPS = 13;
const char DETS[N_DETS][6] = {
  "a ", "the ", "this ", "that ", "some ", "my ", "your ", "his ", "its ",
  "her "};
const char AGENTS[N][13] = {
  "alligator ", "boy ", "cat ", "dog ", "elk ", "fireman ", "girl ",
  "hedgehog ", "ibex ", "jaguar ", "kite ", "llama ", "madman ", "neighbor ",
  "orphan ", "punk ", "queen ", "rascal ", "sloth ", "tiger ", "undertaker ",
  "valley girl ", "wiseguy ", "xylophonist ", "yeti ", "zookeeper "};
const char PREPS[N_PREPS][8] = {
  "around ", "on ", "onto ", "near ", "over ", "under ", "through ", "into ",
  "across ", "to ", "from ", "at ", "in "};
const char ADJS[N][16] = {
  "angry ", "blue ", "captivating ", "dead ", "eager ", "flimsy ",
  "gargantuan ", "hairy ", "ignorant ", "jealous ", "kind ", "lazy ",
  "miserly ", "naked ", "orange ", "polite ", "quiet ", "revolting ", "silly ",
  "twisted ", "ugly ", "violent ", "weird ", "xenophobic ", "yellow-bellied ",
  "zany "};
const char OBJS[N][18] = {
  "anvil ", "box ", "cupboard ", "door ", "easel ", "freight train ",
  "gas station ", "hammock ", "igloo ", "junpiper bush ", "kelp forest ",
  "lingerie section ", "mirror ", "neighborhood ", "orchestra ", "pickle ",
  "quizshow ", "rug ", "soapbox ", "tornado ", "undergarments ", "vineyard ",
  "woods ", "xerox machine ", "yoyo ", "zoroastrian "};


const char* get_random_word_from_array(const char** a, int len) {
  int i = rand() % len;
  return a[i];
}


char* rand_sent() {
  char sent[80] = "";
  char* det1 = get_random_word_from_array(DETS, N_DETS);
  strcat(sent, det1);
  char* adj1 = get_random_word_from_array(ADJS, N);
  strcat(sent, adj1);
  char* agent = get_random_word_from_array(AGENTS, N);
  strcat(sent, agent);
  char* prep = get_random_word_from_array(PREPS, N_PREPS);
  strcat(sent, prep);
  char* det2 = get_random_word_from_array(DETS, N_DETS);
  strcat(sent, det2);
  char* adj2 = get_random_word_from_array(ADJS, N);
  strcat(sent, adj2);
  char* obj = get_random_word_from_array(ADJS, N);
  strcat(sent, obj);
  return sent;
}


int main() {
  char* sent;
  
  srand(time(NULL)); // seed randgen

  for (int i = 0; i < 5; i++) {
    *sent = rand_sent();
    printf("%s\n", sent);
  }
}
