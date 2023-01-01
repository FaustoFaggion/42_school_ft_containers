# 42_school_ft_containers

<h2>Namespace</h2>

<p>Namespaces allow to group entities like classes, objects and functions under a name. This way the global scope can be divided in "sub-scopes", each one with its own name.</p>
<p>The format of namespaces is:</p>
<code>
<pre>
namespace identifier {
	entities
}
</pre>
</code>
<p>Where identifier is any valid identifier and entities is the set of classes, objects and functions that are included within the namespace. For example:</p>
<code>
<pre>
namespace myNamespace
{
  int a, b;
}
</pre>
</code>
<p>In this case, the variables a and b are normal variables declared within a namespace called myNamespace. In order to access these variables from outside the myNamespace namespace we have to use the scope operator ::. For example, to access the previous variables from outside myNamespace we can write:</p>
<code>
<pre>
myNamespace::a
myNamespace::b
</pre>
</code>
<p>The functionality of namespaces is especially useful in the case that there is a possibility that a global object or function uses the same identifier as another one, causing redefinition errors.</p>

<h2>Vector</h2>


Árvore Binária

class nó(x) {
	private:
		chave(k); // (x.esquerda.chave < x.chave) (x.direita.chave > x.chave) 
		esquerda; // nó filho a esquerda
		direita; // nó filho a direita
		p; // nó pai
}

OPERAÇÔES:

Search:

x = nó raiz
k = chave;

Método recursivo

Tree-Search(x, k) {
	if (x == NULL || k == x.chave)
		return (x);
	if(k < x.chave)
		return (Tree-Search(x.esquerda, k));
	else
		return (Tree-Search(x.direita, k));
}

Método Iterativo

Iterative-Tree-Search(x, k) {
	While (x != NULL && k != x.chave) {
		if (k < x.chave)
			x = x.esquerda;
		else
			x = x.direita;
	}
	return (x);
}

MINIMUM:

Tree-Minimum(x) {
	while (x.esquerda != NULL)
		x = x.esquerda;
	return (x);
}

MAXIMUM:

Tree-Maximum(x) {
	while (x.direita != NULL)
		x = x.direita;
	return (x);
}

SUCESSOR:

Tree_Sucessor(x) {
	if (x.direita != NULL)
		return (Tree-Minimum(x.dirreita))
	
}

INSERT:

Tree-Insert(T, z) {
	y = NULL;
	x = T.raiz;
	while (x != NULL) {
		y = x;
		if (z.chave < x. chave)
			x = x.esquerda;
		else
			x = x.direita;
	}
	z.p = y;
	if (y == NULL)
		T.raiz = z;
	else if (z.chave < y.chave)
		y.esquerda = z;
	else
		y.direita = z;
}

DELETE:

Tree-Delete(T, z) {
	if (z.esquerda == NULL)
		Transplat(T, z, z.esquerda);
	else if (z.direita == NULL)
		Transplat(T, z, z.direita);
	else {
		y = Tree_Minimum(z.direita);
		if (y.p != z) {
			Transplant(T, y, y.direita);
			y.direita = z.direita;
			y.direita.p = y 
		}
		Transplant(T, z, y);
		y.esquerda = z.esquerda;
		y.esquerda.p = y;
	}
}



ÁRVORE VERMELHA E PRETA


Left-Rotate(T, x) {
	y = x.direita;
	x.direita = y.esquerda;
	if (y.esquerda != T.null)
		y.esquerda.p = x;
	y.p = x.p;
	if (x.p == T.null)
		T.raiz = y;
	else if (x == x.p.esquerda)
		x.p.esquerda = y;
	else
		x.pdireita = y
	y.esquerda = x;
	x.p = y;
}

Right-Rotate(T, x) {
	y = x. esquerda;
	x.esquerda = y.direita;
	if (y.direita != T.null)
		y.direita.p = x;
	y.p = x.p;
	if (x.p == T.null)
		T.raiz = y;
	else if (x == x.p.esquerda)
		x.p.esquerda = y
	else
		x.p.direita = y;
	y.direita = x;
	x.p = y;
}

RB-INSERT:

Tree-Insert(T, z) {
	y = NULL;
	x = T.raiz;
	while (x != NULL) {
		y = x;
		if (z.chave < x. chave)
			x = x.esquerda;
		else
			x = x.direita;
	}
	z.p = y;
	if (y == NULL)
		T.raiz = z;
	else if (z.chave < y.chave)
		y.esquerda = z;
	else
		y.direita = z;
	z.esquerda = T.null;
	z.direita = T.null;
	z.cor = red
	RB-Insert_fixup(T, z);
}


1. Todo nó é vermelho ou preto.
2. A raiz é preta.
3. Toda folha NULL é preta.
4. Se um nó é vermelho, então os seus filhos são pretos.
5. Para cada nó, todos os caminhos simples do nó até folhas descendentes contêm o mesmo número de nós pretos

RB-Insert-Fixup(T, z) {
	while (z.p.cor == vermelho)
	{
		if (z.p == z.p.p.esquerda)
		{

		}
	}
}