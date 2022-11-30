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